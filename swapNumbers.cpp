#include<iostream>
int swapNumbers(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    std::cout<<"enter two numbers:"<<std::endl;
    std::cin>>a>>b;
    swapNumbers(a,b);
    std::cout<<"after swapping:"<<a<<""<<b;
    return 0;
}