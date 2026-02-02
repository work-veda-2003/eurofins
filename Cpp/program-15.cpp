#include<iostream>
using namespace std;

//Template class
template <class T>
class Calculator {
private:
T a,b;


public:
Calculator(T x, T y){
    a=x;
    b=y;
}

T add(){
    return a+b;
}
};

int main(){
    Calculator<int> c1(10,20);
    cout<<"Int addition: "<<c1.add()<<endl;
    Calculator<float> c2(3.5,4.5);
    cout<<"Float addition: "<<c2.add()<<endl;

}