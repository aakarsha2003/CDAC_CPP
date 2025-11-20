#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,ognum,remainder,digits=0;
    double sum=0;
    cout<<"enter a number:";
    cin>>num;
    ognum=num;
    int temp=num;
    while(temp!=0){
        temp/=10;
        digits++;
    }
    temp=num;
    while(temp!=0){
        remainder=temp%10;
        sum+=pow(remainder,digits);
        temp/=10;
    }

    if(sum==ognum)
    cout<<ognum<<"is an armstrong number.";
    else
    cout<<ognum<<"is not armstrong";
    return 0;

}