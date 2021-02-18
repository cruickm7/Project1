#include "String.h"
using namespace std;
int length(char* c){
    int i;
    for (i = 0; c[i] != '\0'; i++);
    return i;
}
char buf[1000], word[1000][100];
int start[500];
int String::Length() {
    return length(string);
}

void count(char* string1, char words[1000][100], int startpoint[500]) {
    int q = 0, j = 0;
    strcpy(buf, string1);
    for (int i = 0; i <= strlen(buf); i++) {
        if (buf[i] == '\040' || buf[i] == '\0') {
            words[q][j] = '\0';
            startpoint[q] = i - length(words[q]);
            q++;
            j = 0;
        } else {
            words[q][j] = buf[i];
            j++;
        }
    }
    words[q][0] = '\0';
}

void String::Add(char *c) {
    strcat(string, c);
}
void String::Copy(char *c) {
}
void String::Replace(char *a, char *b) {
    count(string, word, start);
    printf("\nReplacing \"%s\" with \"%s\" in \"%s\"", a, b, string);
    for (int x = 0; word[x][0] != '\0'; x++) {          //I call this the humpty dumb-pty
        if (!strcmp(word[x], a))strcpy(word[x], b);
        if (x == 0) strcpy(buf, word[x]);               //Cant concatenate to an empty string
        else {
            strcat(buf, " ");                   //re adding the space removed by the count function
            strcat(buf, word[x]);                      //tacking on the next string
        }
    }
    strcpy(string, buf);
}
void String::Remove(char *c) {
    char remword[1000][100];
    int remstart[500], rem;
    count(string, word, start);
    count(c, remword, remstart);
    buf[0] = '\0';
    printf("\nRemoving \"%s\" from \"%s\"", c, string);
    for (int x = 0; word[x][0] != '\0'; x++) {          //I call this the humpty dumb-pty
        rem = 0;
        for (int y = 0; remword[y][0] != '\0'; y++) {
            if (!strcmp(word[x], remword[y]))rem = 1;
        }
        if (rem != 1) {
            if (buf[0] == '\0') strcpy(buf, word[x]);               //Cant concatenate to an empty string
            else {
                strcat(buf, " ");                   //re adding the space removed by the count function
                strcat(buf, word[x]);                      //tacking on the next string
            }
        }
    }
    strcpy(string, buf);
}
void String::Insert(char *c) {
    char m[100];
    int end[500], cnt = 0, t = 0, wrdpos[1000];
    count(string, word, start);
    printf("\nInsets after which word:\n");
    for (int x = 0; word[x][0] != '\0'; x++) printf("\'%s\' ", word[x]);
    printf("\nEnter:");
    scanf("%s", m);
    printf("\nAfter which occurrence:\n0: All\n");
    for (int x = 0; word[x][0] != '\0'; x++) {
        if (!strcmp(word[x], m)) {
            wrdpos[cnt] = x;
            cnt++;
            printf("%i: \'%s\' ", cnt, word[x]);
        } else printf("%s ", word[x]);
    }
    printf("\nEnter:");
    scanf("%i", &t);
    if (t == 0) {
        for (int y = 0; y < cnt; y++){
            strcat(word[wrdpos[y]], " ");
            strcat(word[wrdpos[y]], c);
        }
    } else{
        strcat(word[wrdpos[t - 1]], " ");
        strcat(word[wrdpos[t - 1]], c);
    }
    for (int x = 0; word[x][0] != '\0'; x++) {          //I call this the humpty dumb-pty
        if (x == 0) strcpy(buf, word[x]);               //Cant concatenate to an empty string
        else {
            strcat(buf, " ");                   //re adding the space removed by the count function
            strcat(buf, word[x]);                      //tacking on the next string
        }
    }
    strcpy(string, buf);
}
void String::Accessor() {
    //cout << "\n" << string;
    printf("\n%s", string);
}
void String::Mutator() {
    printf("Enter string:");
//    cin.getline(string, 1000);
    strcpy(string, "testing this program");
}
void String::Compare(char *c) {
    char word[1000][100], cmpword[1000][100], difword[1000][100];
    int start[500], cmpstart[500], cmp = 0, dif = 0;
    count(string, word, start);
    count(c, cmpword, cmpstart);
    for (int x = 0; word[x][0] != '\0'; x++) {
        cmp = 0;
        for (int y = 0; cmpword[y][0] != '\0'; y++) {
            if (!strcmp(word[x], cmpword[y]))cmp = 1;
        }
        if (cmp != 1) {
            strcpy(difword[dif], word[x]);
            dif++;
        }
        if (buf[0] == '\0') strcpy(buf, word[x]);
        else {
            strcat(buf, " ");
            strcat(buf, word[x]);
        }
    }
    if (dif == 0) printf("\nThere are no differences");
    if (dif == 1) printf("\nThere is 1 difference:");
    if (dif > 1) printf("\nThere are %i differences:", dif);
    for (int x = 0; x < dif; x++) {
        printf(" %s,", difword[x]);
    }
}
String::String() {string = new char[1000];}
String::~String() {delete[] string;}

//    for (j = 0; c[j]!='\0'; j++)buf[j+i] = c[j];        //tacking the source characters onto the end of the destination string until the source string runs out of characters
//    buf[i+j] = '\0';                                    //adding a null terminator