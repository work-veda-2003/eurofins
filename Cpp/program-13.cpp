#include<iostream>
using namespace std;

//Function declarations(modules)

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a,int b);

//Function definitions

int add(int a, int b){
    return a+b;
}
int subtract(int a , int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float divide(int a, int b){
    return (float)a/b;
}

int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<"Addition: "<<add(x,y)<<endl;
    cout<<"Subtraction: "<<subtract(x,y)<<endl;
    cout<<"Multiplication: "<<multiply(x,y)<<endl;
if(y!=0){
    cout<<"Division: "<<divide(x,y)<<endl;
}else{
    cout<<"Division cannot be possible(divide by zero)"<<endl;
}
}