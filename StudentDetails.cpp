#include<iostream>
using namespace std;
struct Student{
    int student_id;
    string name;
    string course;
    int marks[5];
    int total_marks;
    float percentage;
};

void showDetails(Student std[],int size){
    for(int i=0;i<size;i++){
    cout<<"student_id:";
    cin>>std[i].student_id;
    cout<<"name:";
    cin>>std[i].name;
    cout<<"course:";
    cin>>std[i].course;
    cout<<"marks:";
    cin>>std[i].marks[i+1];

}
}

void displayInfo(Student std[],int size){
    cout<<"-----Student Details------\n";
    for(int i=0;i<size;i++){
        cout<<"Students"<<i+1<<"\n";
        cout<<"student_id:"<<std[i].student_id;
        cout<<"student name:"<<std[i].name;
        cout<<"course:"<<std[i].course;
        cout<<"marksof 5 subjects:\n";
        for(int j=0;j<5;j++){
            cin>>std[i].marks[j];
        }
        cout<<"\nTotal marks:"<<std[i].total_marks;
        cout<<"\nPercentage:"<<std[i].percentage;

    }
}
int totalmarks(Student std[],int marks){
    int totalmarks=0;
   
    for(int i=0;i<marks;i++){
        std[i].total_marks=0;
        for (int j=0;j<5;j++){
            std[i].total_marks+=std[i].marks[j];

        }
      std[i].percentage=(std[i].total_marks/500.0)*100;
    }
    }
    int countAbove75(Student std[],int size){
        int count=0;
        for(int i=0;i<size;i++){
            if(std[i].percentage>75)
            count++;

        }
        return count;
    }
