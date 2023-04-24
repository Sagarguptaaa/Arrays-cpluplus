//Intersection of 2 Arrays (Find repeating Element in both Arrays)

#include <iostream>
#include<vector>
using namespace std;

//Test cases 
//1 arr {1,2,3,4,6,8} brr {3,4,9,10} 

int main() {
  vector<int>ans ;
  vector<int>arr = {1,2,3,4,6,8} ;
  vector<int>brr = {3,4,9,10} ;



  for(int i=0; i<arr.size(); i++) {

    int Element = arr[i] ;

    for(int j=0; j<brr.size(); j++){

      if(Element==brr[j]){
        ans.push_back(Element) ;
      }
    }
  }

  //Print ans ;

  for(int i =0; i<ans.size(); i++){
    cout << ans[i] << " " ;
  }



  return 0;
}