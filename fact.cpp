#include<iostream>
int main(){
  int fact=1,n;
  std::cout<<"enter a number:";
  std::cin>>n;
  for(int i=0;i<n;i++){
    fact=fact*i;
    return 0;
    std::cout<<"factorial is:"<<fact;
  }
}