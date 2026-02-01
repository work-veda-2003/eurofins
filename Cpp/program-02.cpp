#include<iostream>
using namespace std;

struct Rectangle
{
    int length;//4
    int breadth;//4
    char x; //allocate 4 but use only one byte nearest bigger size its called padding of memory
    // float y;

};
// r1,r2,r3; //global
// struct Rectangle r1;

int main(){
    struct Rectangle r1={10,5};
   r1.length=15;
   r1.breadth=7;
    printf("%lu\n",sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;



}