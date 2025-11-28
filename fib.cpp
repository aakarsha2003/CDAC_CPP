#include<iostream>
int fib(int n){
    if(n<=1)
        return 0;
        return fib(n-1)+fib(n-2);
    }
    int main(){
        int n;
        std::cout<<"Enter a number of terms:";
        std::cin>>n;
         std::cout<<"Fibonacci Series:";
         for(int i=0;i<n;i++){
            std::cout<<fib(i)<<"";

         }
         return 0;
    }
  