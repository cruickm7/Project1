#include "String.h"
using namespace std;
int c0, c1, c2;
String s;
int main() {
    s.Constructor();
    do{
        s.Mutator();
        printf("\n%i", s.Length());
//        s.Accessor();
        s.Add(" Genreal Kenobi!");
        //s.Accessor();
//        printf("\n%i", s.Length());
        s.Replace();

        /*  Program flow
        cout << "0: Exit\n1: Create a string\n2: Get string length";
         */
    } while (c0 != 0);
    return 0;
}
