#include<iostream>
using namespace std;

class ArrayADT{

    private:
    int arr[100];
    int size;


    public:
        // Create array
        ArrayADT(int s){
            size = s;
            cout<<"Enter "<<size<<" elements"<<endl;
           for(int i=0;i<size;i++){
            cin>> arr[i];
           }
        }

        //Traverse
        void traverse(){
            cout<<"Array elements: "<<endl;
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }

        //Insert At a position
        void insertAtPosition(int pos,int x){
         if (pos<0 || pos >size) { cout<<"Invalid position: ";
           return;}
         for(int i=size;i>pos;i--){
            arr[i]=arr[i-1];
         }
         arr[pos]=x;
         size++;
        }

        //delete from position
        void remove(int pos){
            if(pos<0 ||pos>=size){
             cout<<"Invalid position\n";
             return;
            }
            for(int i=pos;i<size-1;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }

        //Search element
        void search(int key){
            for(int i=0;i<size;i++){
                if(arr[i]==key){
                    cout<<"Element found at index: "<<i<<endl;
                }
            }
            cout<<"Element not found\n";
        }
        //Update element
        void update(int pos,int value){
            if(pos<0||pos>=size){
                cout<<"invalid position\n";
            }
            arr[pos]=value;
        }
        int getSize(){
            return size;
        }

};
int main(){
    int n;
    cout<<"enter array size: "<<endl;
    cin>>n;

    ArrayADT arr(n);
    arr.traverse();

    arr.insertAtPosition(2,99);
    cout<<"After insertion"<<endl;

    arr.traverse();

    arr.remove(1);
    cout<<"After deletion: \n";
    arr.traverse();

    arr.search(99);

    arr.update(0,111);
    cout<<"After update:\n";

    cout<<"Current size: "<<arr.getSize()<<endl;

    return 0;
}