#include <iostream>
using namespace std;

//function using pointer (pass by address)
void increment(int* p){
    *p = *p+1;
}
int main(){
    //declaration + initialisation
    int x = 10;
    int* p = &x;

    cout<< "initial value of x: "<< x << endl;
    cout << "Address of x: "<< p <<endl;
    cout << "deferenced p (*p): "<< *p << endl;

    //modify value using pointer
    *p = 20;
    cout<<"after modification via pointer: "<<x<<endl;

    //dynamic memory allocation (single variable)
    int *heapVar = new int(50);
    cout <<"heap variable value: "<< *heapVar << endl;

    //dynamic array allocation
    int n = 3;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i]=(i+1)*10;
    }

    //pointer traversal
    cout<< "Dynamic array values using pointer traversal: ";
    int* temp = arr;
    for (int i=0;i<n;i++){
        cout<< *(temp+i) <<" ";
    }
    cout<< endl;

    // Deallocation (important)
    delete heapVar;
    heapVar = nullptr;

    delete[] arr;
    arr=nullptr;

    //safety check after delete
    if(heapVar = nullptr){
        cout<< "Heap memory safely deleted"<<endl;
    }
    if(arr = nullptr){
        cout<< "Array memory safely deleted"<<endl;
    }
    return 0;
}