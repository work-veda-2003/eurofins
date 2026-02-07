#include <iostream>
using namespace std;

void func(int n){
    int x=0;// local
    if(n>0){
        x++;
        cout<<x<<" ";
       
        func(n-1);
    }
     cout<<endl;
}

void fun(int n){
    static int x = 0; //static
    if(n>0){
        x++;
        cout<<x<<" ";
        fun(n-1);
    }
cout<<endl;
}

int x = 0;
void gfunc(int n){
    if(n>0){
        x++;
        cout<<x<<" ";
        gfunc(n-1);
    }
}

int main(){
    func(3);//each recursive call get s a fresh x
    fun(3);//only one x exists for all calls
    gfunc(3);//throughout program same value shared.
}