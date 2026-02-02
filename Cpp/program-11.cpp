#include<iostream>
using namespace std;

class Student{
    private:
    int id;
    float marks;
public:
void input(){
    cout<<"Enter id: "<<endl;
    cin>>id;
    cout<<"Enter marks: "<<endl;
    cin>>marks;
}
void display(){
    cout<<"Id: "<<id<<endl;
    cout<<"Marks:  "<<marks<<endl;
}
};

int main(){
    Student s1;
    s1.input();
    s1.display();
 return 0;
}