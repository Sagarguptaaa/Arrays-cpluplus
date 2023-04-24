//Find Unique element in array (Every element occur twice accept one)

#include <iostream>
#include <vector>
using namespace std;

//uniqueElement function
int uniqueElement(vector<int>arr){
  int ans = 0 ;
  for(int i=0; i<arr.size(); i++){
    ans = ans ^ arr[i] ;
  }
  return ans ; 
}

//Test Cases 
//1 size = 11 ; array = 1,2,4,2,1,3,6,5,5,6,4
//2 size= 11 ; array = -1,2,3,6,5,2,-1,3,4,6,5



int main() {
  int size ;
  cin >> size ;

  vector<int>arr(size) ;
  
  for(int i=0; i<arr.size(); i++){
    cin >> arr[i] ;
  }


  int answer = uniqueElement(arr) ;
  cout << answer ;

  return 0;
}