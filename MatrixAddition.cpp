#include<iostream>
using namespace std;
int main(){
int rows,cols;
cout<<"enter the no.of rows:";
cin>>rows;
cout<<"enter the no.of columns:";
cin>>cols;
int A[10][10],B[10][10],C[10][10];
cout<<"enter the elements of matrix A:"<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>A[i][j];
    }
}
cout<<"enter the elements of matrix B:"<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>B[i][j];
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}
cout<<"the resultant matrix C after addition is:"<<endl;
if(rows!=cols){
    cout<<"matrix addition is not possible"<<endl;
    return 0;
}else{
    cout<<"matrix addition is possible"<<endl;
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

