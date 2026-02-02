//monolithic program

#include<iostream>
using namespace std;

int main(){
int n,sum=0;

int arr[100];
cout<<"Enter size of array: ";
cin>> n;

cout<<"Enter elements: \n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<"Sum of elements: "<<sum<<endl;
return 0;

}