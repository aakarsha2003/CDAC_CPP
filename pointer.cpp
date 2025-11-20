#include<iostream>
int main(){
    int i=5;
    int *iptr;
    iptr=&i;
    std::cout<<"\ni="<<i;
    std::cout<<"\nAddress of i="<<&i;
    std::cout<<"\niptr="<<iptr;
    std::cout<<"\nValue at iptr="<<*iptr;
}
 