#include<iostream>
using namespace std;

class Student{
    private:
    int id;
    float marks;

    public:
    //Constructor
    Student(int i,float m){
        id = i;
        marks = m;
    }

    
    void display(){
        cout<<"id: "<<id<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){

    Student s1 = Student(1,35.5);
    s1.display();
    return 0;
}