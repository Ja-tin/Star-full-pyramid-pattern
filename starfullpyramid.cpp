#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:-";
    cin>>n;

     // outerloop
    for(int row=0; row<n; row++){
         //spaces
        for(int col=0; col<n-row-1; col++)     //row-1 =[1,2,3 in loop]
          {
            cout<<" ";
          }
         //stars
         for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
    
    cout<<endl;
  }
}