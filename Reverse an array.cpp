#include <iostream>
using namespace std;
//Reverse an array 

int main() {
    int arr[100] ={2,4,6,8,10,12,14,16} ;
    int sizeofarr = 8 ;
    int start =0;
    int end = sizeofarr-1 ;

  //While Loop
  while(start<end){
    swap(arr[start], arr[end]) ;
    start++ ;
    end--;
  }

  //Print an array
  for(int i=0; i<8 ; i++){
    cout << arr[i] <<" " ;
  }
  return 0;
}