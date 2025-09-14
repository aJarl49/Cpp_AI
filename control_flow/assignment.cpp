// Implement a calculator that takes user input and applies different operations (add, subtract, etc.).

#include <iostream>
using namespace std;


int add(int num_1, int num_2){
    return num_1+num_2;
}

int main(){
    int num_1=0, num_2=0;
    std::cout<<"Enter two numbers separated by space: "<<std::endl;
    cin>>num_1>>num_2; // no std::endl here
    cout<<num_1<<num_2<<endl;
    std::cout<<"addition result is " <<add(num_1,num_2)<<std::endl;

    return 0;
}
