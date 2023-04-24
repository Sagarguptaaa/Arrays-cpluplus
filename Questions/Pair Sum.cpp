//Pair Sum (find a pair that upon addition is equal to sum ) ;
#include<vector>
#include <iostream>
using namespace std;

int main() {
  int sum = 9 ;

  vector<int>arr = {1,3,5,7,2,4,6} ;

  for(int i =0; i<arr.size(); i++){

    for(int j=1; j<arr.size() ; j++){
      if(arr[i] + arr[j] == sum   ){
        cout << arr[i] <<" + " <<arr[j] << " = " << arr[i] + arr[j]<< endl ;
      }
    }
  }


  return 0;
}