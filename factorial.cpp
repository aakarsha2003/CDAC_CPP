//factorial of a number
#include<iostream>
int main(){
     long fact=1;
     int n;
    std::cout<<"enter a number:";
    std::cin>>n;
    if(n<0){
        std::cout<<"the number cannot be negative";
        return 0;
    }
    for(int i=0;i<=n;i++){
       
        fact*=i;
      
    }
    std::cout<<"the factorial of"<<n<<"is:"<<fact;
      return 0;
}