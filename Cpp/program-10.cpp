#include<iostream>
using namespace std;

struct Student{
    int id;
    int marks;
};

void input(Student &s);
void display(Student s);

void input(Student &s){
    cout<<"Enter id: "<<endl;
    cin>>s.id;
    cout<<"Enter marks: "<<endl;
    cin>>s.marks;
}
void display(Student s){
    cout<<"ID of student: "<<s.id<<endl;
    cout<<"Marks of student: "<<s.marks<<endl;
}

int main(){
    Student s1;
    input(s1);
    display(s1);
    return 0;
}