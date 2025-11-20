#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  a number:";
    cin>>n;
    cout<<"square from 1 to"<<n<<"are:\n";
    for(int i=0;i<=n;i++){
    cout <<i<<"sqaured="<<i*i<<endl;
    }
    return 0;
}