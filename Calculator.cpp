#include<iostream>
using namespace std;
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a-b;}
float divi(int a,int b){return(float)a/b;}

int main(){
    int choice,x,y;
    cout<<"MenU:\n1.ADD\n2.Subtract\n3.MUltiply\n4.Divide\nEnter choice:";
    cin>>choice;
    cout<<"enter two numbers:";
    cin>>x>>y;
    switch(choice){
        case 1:cout<<"Result="<<add(x,y);
        break;
        case 2:cout<<"Result="<<sub(x,y);
        break;
        case 3:cout<<"Result="<<mul(x,y);
        break;
        case 4:if(y==0)cout<<"Division by zero not allowed";
        else cout<<"Result="<<divi(x,y);
        break;
        default:cout<<"Invalid choice";
}
return 0;
}



