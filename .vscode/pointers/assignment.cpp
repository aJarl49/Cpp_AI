// Assignment: Implement a swap function using references and pointers.

#include <iostream>
using namespace std;

main(){
    int a=1;
    int b=2;
    int c;
    int* c=&a;
    int* a=&b;
    int* b=&c;
    
    cout<<a;

    return 0;
}
