#include "String.h"
using namespace std;
int length(char* c){
    int i;
    for (i = 0; c[i] != '\0'; i++);
    return i;
}
int String::Length() {
    return length(string);
}
void cpy(char* dest, char* src){
    for (int k = 0; k <= length(src); k++)dest[k] = src[k];
}
void count(char* string1){
    printf("\n%s", string1);
    char buf[1000], word[1000][1000];
    int start[500], q = 0, j = 0;
    cpy(buf, string1);
    for (int i = 0; i <= strlen(buf); i++) {
        if (buf[i] == '\040' || buf[i] == '\0') {
            start[q] = i;
            word[q][j] = '\0';
            q++;
            j = 0;
        } else {
            word[q][j] = buf[i];
            j++;
        }
    }
    for (int x = 0; x < q; x++)printf("\n%s", word[x]);
}

void String::Add(char *c) {
    strcat(string, c);
//    int i = length(string), j = 0;
//    printf("\n%i", length(string));
//    char buf[1000];
//    strcpy(buf, string);
//    for (j = 0; c[j]!='\0'; j++)buf[j+i] = c[j];        //tacking the source characters onto the end of the destination string until the source string runs out of characters
//    buf[i+j] = '\0';                                    //adding a null terminator
//    strcpy(string, buf);
    printf("\n%i", length(string));
//    string = buf;
}
void String::Copy(char *c) {
}
void String::Replace() {
    count(string);
}
void String::Remove(char *c) {

}
void String::Insert(char *c) {

}
void String::Accessor() {
    //cout << "\n" << string;
    printf("\n%s", string);
}
void String::Mutator() {
    printf("Enter string: ");
    strcpy(string, "Testing");
    //string = "Hello there...";
//    fgets(string, 1000, stdin);
}
void String::Compare(char *c) {

}
String::String() {string = new char[1000];}
String::~String() {delete[] string;}