#include<iostream>
using namespace std;
class Complex{
    private:
    float real,imag;
    public:
    Complex(float r=0,float i=0){
        real=r;
        imag=i;
    }

    void input(){
        cout<<"Enter Real part:";
        cin>>real;
        cout<<"Enter imaginary Part:";
        cin>>imag;
    }

    void display(){
        if(imag>=0)
        cout<<real<<"+"<<imag<<"i";
        else
        cout<<real<<"-"<<imag<<"i";
    }
    Complex add(Complex c){
        Complex result;
        result.real=real+c.real;
        result.imag=imag+c.imag;
        return result;
    }
    Complex subtract(Complex c){
        Complex result;
        result.real=real-c.real;
        result.imag=imag-c.imag;
        return result;
    }
    Complex multiply(Complex c){
        Complex result;
        result.real=(real*c.real)-(imag*c.imag);
        result.imag=(real*c.imag)+(imag*c.real);
        return result;
    }
};
int main(){
    Complex c1,c2,result;
    int choice;
    cout<<"enter forst complex number:\n";
    c1.input();
    cout<<"\nenter second complex number:\n";
    c2.input();
    do{
        cout<<"\n\n----COMPLEX NUMBER OPERATIONS-----";
        cout<<"\n1.ADD";
        cout<<"\n2.SUBTRACT";
        cout<<"\n3.MULTIPLY";
        cout<<"\n4.EXIT";
        cout<<"\nEnter your Choice:";
        cin>>choice;
        switch(choice){
            case 1:
            result=c1.add(c2);
            cout<<"\nAddition:";
            result.display();
            break;

            case 2:
            result=c1.subtract(c2);
            cout<<"\nSubtraction:";
            result.display();
            break;

            case 3:
            result=c1.multiply(c2);
            cout<<"\nMultiplication:";
            result.display();
            break;

            case 4:
            cout<<"\nExitingg....";
            break;

            default:
            cout<<"\nInvalid Choice!";
        }
        cout<<"\n-----------------------------------------\n";

    }while(choice!=4);
    return 0;
}