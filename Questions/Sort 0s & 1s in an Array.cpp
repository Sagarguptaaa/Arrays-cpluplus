//Sort 0s & 1s in an Array 
#include<vector>
#include <iostream>
using namespace std;



int main() {
  vector<int>arr = {0,1,1,0,1,0,1,0,0} ;

  int start = 0 ;
  int end = arr.size()-1 ;

  while(start < end){

    if(arr[start] == 0){
      start++ ;
    }
    else{
      swap(arr[start], arr[end]) ;
      end-- ;
    }
  }

  //printing 
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] <<" " ;
  }

  return 0;
}