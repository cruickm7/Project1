#include "String.h"
using namespace std;
int c0, c1, c2, len;
char *a = new char[1000], *b = new char[1000], *c = new char[1000];
String s;
int main() {
    s.Mutator();
    do{
        s.Accessor();
        printf("\n"
               "0: Exit\n1: Get string length\n2: Copy a string\n3: Replace words in a string\n4: Remove words from a string\n5: Insert string into a string\n6: Compare strings\nEnter:");
        scanf("%i", &c0);
        //cin >> c0;
        if (c0 == 1){
            printf("\nLength of current string: %i", s.Length());
        }
        if (c0 == 2){

        }
        if (c0 == 3){
            printf("\nReplace: ");
            scanf("%s", a);
//            cin.getline(a, 1000);
//            fgets(a, 1000, stdin);
            printf("\nWith:");
            scanf("%s", b);
//            fgets(b, 1000, stdin);
            s.Replace(a, b);
        }
        if (c0 == 4){
            printf("\nRemove what words:");
            scanf("%s", c);
//            fgets(c, 1000, stdin);
            s.Remove(c);
        }
        if (c0 == 5){
            printf("\nInsert:");
//            fgets(c, 1000, stdin);
            scanf("%s", c);
            s.Insert(c);
        }
        if (c0 == 6){
            printf("\nCompare what string:");
//            fgets(c, 1000, stdin);
            scanf("%s", c);
            s.Compare(c);

        }
        printf("\n");
        system("pause");
    } while (c0 != 0);
    return 0;
}
//        s.Mutator("Hello");
//        s.Add(" testing");
//        s.Accessor();
//        s.Add(" test");
//        s.Replace("test", "what");
//        s.Add(" test");
//        s.Accessor();
//        s.Compare("Hello rr");
//        s.Remove("Hello what");
//        s.Add(" test");
//        s.Insert("yes");
//        s.Accessor();