#include<iostream>
using namespace std;

int sum(int arr[],int n){
if(n==0)return 0;
return arr[n-1]+ sum(arr,n-1);
}

int main(){
int arr[] = {1,5,4,3,2};
    int addn = sum(arr,5);
cout<<addn<<endl;

    return 0;
}