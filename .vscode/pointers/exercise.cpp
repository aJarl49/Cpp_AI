# include <iostream>
using namespace std;

int main(){
    int num_1 = 11;
    cout<<&num_1<<endl; //&will shouw us memory address of variable
    int* pointer = &num_1; //reference int pointer is the adress of variable num_1
    cout<<pointer<<endl; //show in address

    cout<<*pointer<<endl;//dereferencing pointer to acces variabe stored at the address
    *pointer=26; // to change value at the address, acces address and assign value of 26
    cout<<*pointer<<endl; // show what's at the pointer
    cout<<num_1<<endl; // show value of variable num_1

    int num_2; //has to initialised IOT get address IOT be reassigned
    int* pointer_2 = &num_2;
    *pointer_2 = 7;
    cout<<"num_2="<<num_2<<endl;

    system("pause>0");
    return 0;
}