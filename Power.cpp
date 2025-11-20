#include<iostream>
using namespace std;
int main(){
    int a,b;
    int result=1;
    cout<<"enter base(a):";
    cin>>a;
    cout<<"enter exponent(b):";
    cin>>b;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    cout<<a<<"raised to the power"<<b<<"is:"<<result;
    return 0;
}