#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b){
    int temp = *a;
*a= *b;
*b=temp;
}
int main(){
    int x=5,y=10;
    swapNumbers(&x,&y);
    cout<< x <<" "<<y;
    return 0;
}