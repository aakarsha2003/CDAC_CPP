#include<iostream>
float SimpleInterest(float p,float r,float t){
   return (p*r*t)/100;
}
int main(){
    float p,r,t;
    std::cout<<"enter principal rate,rate of interest and time:";
    std::cin>>p>>r>>t;
    std::cout<<"Simple Interest is:"<<SimpleInterest(p,r,t);

    return 0;
}