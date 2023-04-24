#include <iostream>
#include<vector>
using namespace std;
//Majority Element in an array {Leetcode - [169]}
//Solved by [Moores voting algorithm] 

//test-cases INPUT = 3 2 3 , Output = 3 
int main() {

  vector<int>arr ={3,2,3} ;

  int element , count = 0 ;

  for(int i =0 ; i<arr.size() ; i++){
    if(count == 0) {
      element = arr[i] ;
      count++ ; 
    }
    else if(arr[i]==element){
      count++ ;
    }
    else{
      count -- ;
    }
  }

  int votes =0; 
  for(int i=0; i<arr.size(); i++){
    if(arr[i]==element){
      votes++ ;
    }

    if(votes > arr.size()/2){
      cout << element ;
    }
  }

  return 0;
}