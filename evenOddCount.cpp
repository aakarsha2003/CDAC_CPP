#include<iostream>
using namespace std;
int main(){
    int n;
    int evenCount=0;
    int oddCount=0;
    cout<<"enter any number:";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        if(digit%2==0)
            evenCount++;
            else
                oddCount++;
            
            n=n/10;
        }
        cout<<"even digits:"<<evenCount<<endl;
        cout<<"odd digits:"<<oddCount;
        return 0;
    }
