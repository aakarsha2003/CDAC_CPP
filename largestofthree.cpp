//greatest of three numbers
#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"enter three numbers:";
    std::cin>>a>>b>>c;
    if(a>=b&&a>=c){
        std::cout<<a<<"is the largest";
    }
    else if(b>=a&&b>=c){
        std::cout<<b<<"is the largest";
    }
    else{
        std::cout<<c<<"is the largest";
    }
}