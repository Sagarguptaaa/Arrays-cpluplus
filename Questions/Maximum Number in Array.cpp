#include <iostream>
#include  <climits> 
using namespace std;

//Maximum Number in Array 

int main() {
  //Array 
  int Maxarr[100] = {2,8,10,5,35,76,920,1232,1500,2640} ;

  //Maxi Variable 
  int Maxi = INT_MIN ;

  //For Loop 
  for(int i=0; i<10; i++){

    if(Maxarr[i]>Maxi){
      Maxi = Maxarr[i] ;
    }

  }

  // Printing Maximum Number 
  cout << "Maximum Number of the array " << Maxi ;

  return 0;
}