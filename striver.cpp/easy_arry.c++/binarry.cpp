#include<iostream>
using namespace std ;

 /// code to convert decimel no. into  binarry no. 
// 2nd code to convert binary no. to decimal no.  this is by function 
 int binToDecimal(int binNum){
    int ans =0 , pow =1 , rem  ;

     while(binNum > 0 ){
        int rem = binNum % 10 ; // to get the last digit 
         ans += rem*pow ; 

         binNum /= 10 ; 
         pow *= 2 ; 

     }
       return ans ;  // decimal form
 }




int main (){
   int decimal;
   int binary ; 
   cout << "entered the binary no. " << endl ; 
   cin >> binary ;
   cout<< "enter the no. to find the binarry no."  << endl  ;
   cin >> decimal ;
   int ans=0 , rem  , pow =1;
   while(decimal >0){
    rem = decimal % 2; // this will give me the remainder
     decimal = decimal / 2; 
      ans = ans + (rem*pow) ;
      pow = pow*10;

   }

   cout << ans << endl ;
   cout << binToDecimal( binary ) ;

    return 0 ;

}