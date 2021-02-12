#include "String.h"
using namespace std;
int c0, c1, c2;
String s;
int main() {
    do{
        s.Mutator();
        s.Add(" testing");
        s.Accessor();
        s.Add(" test");
        s.Accessor();
    } while (c0 != 0);
    return 0;
}
