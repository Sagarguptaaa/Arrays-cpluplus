#include <iostream>
using namespace std;

//Linear Search in Array 

int main() {
  int searcharr[100] = {2,4,6,8,10,12,14,16,18,20} ;

  //Target
  int Search_Target  = 12 ;
  
  //For Loop
  for(int i=0; i<10 ; i++){
    if(searcharr[i]==Search_Target){
      cout << "Fount at " << i << " index" ;
      break ;
    }
  }


  return 0;
}