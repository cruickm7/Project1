#include "String.h"
using namespace std;
int c0, c1, c2;
String s;
int main() {
    do{
        s.Mutator("Hello");
        s.Add(" testing");
//        s.Accessor();
        s.Add(" test");
        s.Replace("test", "what");
        s.Add(" test");
        s.Accessor();
        s.Compare("Hello what");
        //s.Remove("Hello what");
        s.Add(" test");
        s.Insert("yes");
        s.Accessor();
    } while (c0 != 0);
    return 0;
}
