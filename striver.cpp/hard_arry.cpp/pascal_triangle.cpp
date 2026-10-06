#include<iostream>
using namespace std ; 

// now making the function to find the each element by its raws and colum 
 int funNCR(int r, int c){ // finding the individual element 
//    here we are finding the rth raw and cth coloum element 
    r = r-1 , c= c-1;
    int res = 1; 
    for(int i=0 ; i<c ; i++){
        res = res *(r-i); // r is related to the raws
        res = res / (i+1); // c for the colum 
    }
    return res ; 
 }
 

 // now to find the whole raws
 void funrwas(int n){
     for(int i=1 ; i<=n ; i++){
        cout<< funNCR(n , i) << " "; // i is the colum
     }
 }

 // now the easy way to find the whole raws
 void  raws(int n ){
    int ans = 1 ;
    cout << ans << " ";
    for(int i=1 ; i<n  ; i++){
         ans = ans *(n-i) ;   /// n=5 --->> 1 4 6 4 1 
          ans = ans/(i);

          cout << ans << " ";
    }
 }
//
/// now for the whole pascal triangle 
void passcaltriangle(int n){ // print the triangle up to n raws 
        if(n == 1 ) {
             cout << n ;
             return ;
        }
        for(int i = 1 ; i<=n ; i++){
             raws(i) ;
             cout << " " <<  endl ;
        }
    
        

}

int main (){

    cout << funNCR(5,1) << endl ;
    
    funrwas(5);
    cout << endl ; 
    raws(5);
    cout <<  endl ; 
    passcaltriangle(5) ; 
    return 0 ; 
}

// // class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> triangle ;
        
//      for(int i= 1 ; i<= numRows ; i++){  // for rows element 
//          long long ans =1 ;
//                vector<int> Rows; // vector for the individual rows
   
              
//                Rows.push_back(1);
               
//                for(int c=1 ; c < i ; c++){  /// for coloum element 
//                       ans = ans*(i - c );
//                       ans = ans/(c);
//                       Rows.push_back(ans) ;
//                   }
//                     triangle.push_back(Rows) ;
//        }

//        return triangle ;
        
//     }
     
// };