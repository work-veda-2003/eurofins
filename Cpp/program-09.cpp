#include<iostream>
using namespace std;

struct Student{
    int id;
    float marks;
};

//call by value
void valueMethod(Student s){
    s.marks+=10;
    cout<< "Inside call by value: "<<s.marks<<endl;

}

//Call by reference
void referenceMethod(Student &s){
    s.marks+=10;
     cout<< "Inside call by reference: "<<s.marks<<endl;
}

//Call by address
void callByAddress(Student *s){
    s->marks+=10;
    cout<< "Inside call by Address: "<<s->marks<<endl;
}

int main(){

    Student s1 = {101 , 70};
    cout<<"original marks: "<<s1.marks<<endl;

    cout<<"After call by value: "<<endl;
    valueMethod(s1);
    cout<<"After call by reference: "<<endl;
    referenceMethod(s1);
     cout<<"After call by address: "<<endl;
     callByAddress(&s1);
     return 0;
}