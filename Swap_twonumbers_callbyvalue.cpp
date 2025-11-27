#include<iostream>
int main(){
    using namespace std;
    void swap_by_val(int ,int );

    int n1,n2;
    cout<<"enter the firts number:";
    cout>>n1;
    cout<<"enter the second number:";
    cout>>n2;
swap_by_val(n1,n2);
cout<<"n1"<<n1<<"\n";
cout<<"n2"<<n2<<"\n";
    return 0;
}

void swap_by_val(int x1,int x2){
    int temp;
    temp=x1;
    x1=x2;  
    x2=temp;
    cout<<"x1"<<x1<<"\n";
    cout<<"x2"<<x2<<"\n";
}
