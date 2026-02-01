#include <iostream>
using namespace std;

//function declaration
int add(int a, int b);
void display(int result);

int main(){
    int x, y;
    cout<< "Enter two numbers: ";
    cin>> x >> y;

    //function call
    int result = add(x,y);

    //call void function
    display(result);

    return 0;
}
//function definition
int add(int a, int b){
    return a + b;
}

//void function definition
void display(int result){
    cout<< "Sum is: "<<result << endl;
}

/*
main() starts
User inputs values
add(x,y) is called
Function returns sum
display(result) prints output
*/