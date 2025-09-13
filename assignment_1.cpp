//Assignment: Implement a program that reads two numbers and outputs their sum, difference, product, quotient.

# include <iostream>

using namespace std;

int main (){

    int num_1;
    int num_2;
    int add;
    int sub;
    int mul;
    int div;
    cout<<"first number: "; //observe the direction of the arrows
    cin>>num_1;
    cout<<"second number: ";
    cin>>num_2;
    add=num_1+num_2;
    sub=num_1-num_2;
    mul=num_1*num_2;
    div=num_1/num_2;
    cout<<"Your numbers added give "<<add<<std::endl;
    cout<<"Your numbers subtracted give "<<sub<<std::endl;
    cout<<"Your numbers multiplied give "<<mul<<std::endl;
    cout<<"Your number divided give "<<div<<std::endl;
    return 0;
} // cannot edit in read-only editor: how to run it interminal?