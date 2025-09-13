//Assignment: Implement a program that reads two numbers and outputs their sum, difference, product, quotient.
//Vwersion 1.1, improved on code lenght

# include <iostream>

using namespace std;

int main (){

    int num_1=0, num_2=0;
    std::cout<<"Enter two numbers separated by space: "<<std::endl;
    std::cin>>num_1>>num_2;
    std::cout<<"Your numbers added give "<<num_1+num_2<<std::endl;
    std::cout<<"Your numbers subtracted give "<<num_1-num_2<<std::endl;
    std::cout<<"Your numbers multiplied give "<<num_1*num_2<<std::endl;
    std::cout<<"Your number divided give "<<num_1/num_2<<std::endl;
    return 0;
}