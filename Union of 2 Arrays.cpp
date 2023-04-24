//Union of 2 Arrays 

#include<vector>
#include <iostream>
using namespace std;
//Test cases 
//1 sizeofarr = 4 , arrayOfArr = 2 4 6 8 ,  sizeofbrr = 3 , arrayOfBrr = 1 3 7 
//2 sizeofarr = 4 , arrayOfArr = 1 4 5 6 ,  sizeofbrr = 4 , arrayOfBrr = 3 2 8 7  

void Union(vector<int>arr , vector<int>brr , vector<int>ans){


  for(int i=0; i<arr.size(); i++){
    ans.push_back(arr[i]) ;
  }

  for(int i=0; i<brr.size(); i++){
    ans.push_back(brr[i]) ;
  }

  //printing ans 
    for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }

}

int main() {

    int sizeofarr ;
  cin >> sizeofarr ;

  int sizeofbrr ;
  cin >> sizeofbrr ;

  vector<int>arr(sizeofarr);
  vector<int>brr(sizeofbrr) ;
    vector<int>ans ; 

    for(int i=0; i<sizeofarr; i++){
    cin >> arr[i] ;
  }

  for(int i=0; i<sizeofbrr; i++){
    cin >> brr[i] ;
  }

  Union(arr , brr , ans ) ;



  return 0;
}