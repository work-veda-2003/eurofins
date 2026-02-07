#include<iostream>
using namespace std;

int factTail(int n,int acc){
    if(n==0)return acc;
    return factTail(n-1,acc*n);
}

int main(){
    cout<<factTail(5,1);
    return 0;
}