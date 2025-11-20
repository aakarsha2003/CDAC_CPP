#include<iostream>
char grade(int marks){
if(marks>=90)return 'A';
else if(marks>=75)return 'B';
else if(marks>=50)return 'C';
else
return 'F';
}
int main(){
    int marks;
    std::cout<<"Enter your marks:";
std::cin>>marks;
std::cout<<"your grade:"<<grade(marks);
return 0;

}