#include<iostream>
using namespace std;

//Call by value
void swapValue(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"Inside swap value: a="<< a << " b="<< b<< endl;
}

//Call by Reference
void swapReference(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
    cout<<"Inside swap value: a="<< a << " b="<< b<< endl;
}
//Call by Address (Pointer)
void swapAddress(int *a,int *b){
    int temp =*a;
    *a = *b;
    *b = temp;

    cout<<"Inside swapAddress : a="<< *a << " b="<< *b<<endl;
}
int main(){
    int x = 10, y = 20;
    cout<<"Before swap: x="<< x << " y="<< y << endl;
    swapValue(x , y);
    cout<< "After swapValue: x="  << x << " y=" << y<< endl;
    swapReference(x, y);
    cout<< "After swapReference: x="<< x << " y="<<y<<endl;
    swapAddress(&x, &y);
       cout<< "After swapAddress: x="<< x << " y="<<y<<endl;
}