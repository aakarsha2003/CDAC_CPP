//sum of first n natural numbers using while loop
#include<iostream>
int main(){
    int n,sum=0,i=1;
    std::cout<<"enter a number:";
    std::cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
        std::cout<<sum;
        return 0;
    }
