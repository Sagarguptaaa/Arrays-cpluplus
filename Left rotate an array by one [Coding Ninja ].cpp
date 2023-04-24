//Left rotate an array by one [Coding Ninja ]
#include<vector>
#include <iostream>
using namespace std;

//Test-cases
// Input = 1,2,3,4,5 -- Output = 2,3,4,5,1 

int main() {
  vector<int>arr = {1,2,3,4,5} ;

  for(int i=0; i<arr.size()-1; i++){
    swap (arr[i], arr[i+1]) ;
  }

  for(int i =0; i<arr.size(); i++){
    cout << arr[i] << " " ;
  }
  return 0;
}