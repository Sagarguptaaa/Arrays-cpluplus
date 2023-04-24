#include <iostream>
using namespace std;
//Extreme print an array 

int main() {
  int arr[100] ={2,4,6,8,10,12,14,16} ;

  //For Loop
  for(int i=0; i<8; i= i+2){
    swap(arr[i], arr[i+1]) ;
  }

  //Print an array
  for(int i=0; i<8 ; i++){
    cout << arr[i] <<" " ;
  }
  return 0;
}