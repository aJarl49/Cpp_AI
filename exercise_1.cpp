// Wxercise: swap numbers a and b

#include <iostream>

using namespace std;
 int main(){
    int a = 1;
    int b = 2;
    int c; // if here would be int c=a, then we will have redeclaration issue
    c = a; // initialize all variable first, even before swapping
    a=b;
    b=c;
    cout<<a;
    return 0;
 }