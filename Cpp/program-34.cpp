#include<iostream>
using namespace std;

class Array2DADT{
    private:
    int arr[10][10];
    int rows,cols;

    public:
    //Create 2D array
    Array2DADT(int r,int c){
        rows=r;
        cols=c;
        cout<<"Enter elements: "<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>arr[i][j];
            }
        }
    }

    //traverse 2D array
    void traverse(){
    //code here
    cout<<"2D Array:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    //Insert at position
    void insert(int r, int c,int value){
        //code here

        if(r<0|| r>=rows || c<0 || c>=cols){
            cout<<"Invalid position\n";
            return;
        }
        arr[r][c]=value;

    }

    //Delete(set to 0)
    void remove(int r, int c){
       //code here 
       if(r<0||r<=rows|| c<0|| c<=cols){
        cout<<"Invalid position\n";
       }
       arr[r][c]=0;
    }

     //Search element
     void search(int key){
      //your code here
      for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                cout<<"element found at index : "<<i<<endl;
            }
        }
      }
      cout<<"element not found\n";

     }

     //Update element
     void update(int r, int c, int value){
        //code here
       if(r<0||r<=rows||c<=0||c<=cols){
          cout<<"Invalid position\n";
       }
        arr[r][c]=value;
     }
  

     //Get size
     void getSize(){
        cout<< "Rows: "<<rows<<", Columns: "<<cols<<endl;
     }


};
int main(){
    int r, c;
    cin>>r>>c;

    Array2DADT arr(r,c);
    arr.traverse();

    arr.insert(1,1,99);
    arr.traverse();

    arr.remove(0,0);
    arr.traverse();

    arr.search(99);
    arr.update(0,1,111);
    arr.traverse();

    arr.getSize();

    return 0;
}