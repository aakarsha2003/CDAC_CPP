#include<iostream>
int main(){
    int a=10;
    int *p=&a;

    std::cout<<"value of a:"<<a<<std::endl;
    std::cout<<"address of a:"<<&a<<std::endl;
    std::cout<<"value of p(address of a):"<<p<<std::endl;
    std::cout<<"value pointed by p(value of a):"<<*p<<std::endl;
    return 0;

}