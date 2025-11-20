//count digits in a number
//factorial using loop
//armstring number(for any number of digits)

#include<iostream>
int main(){
    int n,sum=0;
    std::cout<<"enter a number:";
    std::cin>>n;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    
   std:: cout<<"the sum is" <<sum;
   return 0;
    
    }
