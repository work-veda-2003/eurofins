#include<iostream>
using namespace std;

// define a structure

struct Student{
    int id;
    float marks;
};

int main(){

    //declare structure variable
     Student s1 = {101,88.5};

    //declare a pointer to a structure
     Student *ptr;

    // store address of structure
ptr = &s1;

// access members using pointer
cout<< "Using pointer(static object): "<< endl;
cout<< "Id: "<< ptr->id<<endl;
cout<<"Marks "<<ptr->marks<<endl;


//dynamic allocation of structure
Student *dynPtr = new Student;

//assign value dynamically
dynPtr->id = 102;
dynPtr->marks = 91.3;

cout<< "Using pointer (dynamic object): "<<endl;
cout << "ID: "<<dynPtr->id<<endl;
cout<<" Marks: "<<dynPtr->marks<<endl;


// free memoty
delete dynPtr;

    return 0;
}