#include<iostream>
using namespace std;

int area(float length,float breadth){
    if(length<=0 || breadth<=0){
        cout<<"length or breadth cannot be zero or negative";
        return 0;
    }
    else{
        int area=length*breadth;
        cout<<"area of rectangle:"<<area;
        return area;

    }
}
    int main() {
        float length,breadth;
        cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;
        area(length,breadth);
        return 0;
    
}