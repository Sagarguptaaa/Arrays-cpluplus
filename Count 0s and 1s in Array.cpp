#include <iostream>
using namespace std;

//Count 0s and 1s in Array 

int main() {
  //Array
  int Countarr[100]= {0,0,1,0,1,0,1,1,0,0,} ;
  
  //zeros , ones
  int zeros = 0;
  int ones = 0;

  //For Loop
  for(int i=0; i<10; i++){
    if(Countarr[i]==0){
      zeros++;
    }else{
      ones++ ;
    }
  }

  //Print
  cout << "Number of zeros " << zeros << endl;
  cout << "Number of ones " << ones ;
  



  return 0;
}