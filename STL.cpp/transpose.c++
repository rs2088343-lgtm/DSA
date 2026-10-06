#include<iostream>
#include<vector>
using namespace  std ;

/// now for the transpose 


// // v[0].size() -> number of inner vectors (rows of vt)
// // vector<int>(v.size()) -> creates each inner vector with v.size() elements
// vector<vector<int>> vt(v[0].size(), vector<int>(v.size()));


int main (){
    vector<vector<int>> v={{1,3},{5,8}, {6,7}}; // 3*2
    // transpose is 2*3 
    //// here v[0].size is the no. element in inner vector  and vector<int>(v.size()) ->  this create the vector in each inner element 
     vector<vector<int>> vt(v[0].size() , vector<int>(v.size())); ///// now this formed the 2*3 matrix 
     /// above matrix have each element is 0 ;
         

     for(int i=0 ; i<v.size() ; i++){     /// this for the raws 
          for(int j=0; j<v[0].size() ; j++){   /// this for the coloum
                vt[j][i] =v[i][j] ;    /// now this is the tranpose 

          }
     }
     cout <<" after the transpose " << endl ;
     for(int i=0 ; i<vt.size() ; i++){
           for(auto x : vt[i]){
                cout << x <<" " ;
           }
             cout << endl ;
     }
     
    return 0;
}





// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//            int raw = matrix.size() ;
//            int col = matrix[0].size() ;
//            if(raw <1 || col >1000 || raw*col <1 || raw*col >100000 ) return  {} ;

//           vector<vector<int>> vt(matrix[0].size() , vector<int>(matrix.size())) ;

//           for(int i=0 ; i<matrix.size() ; i++){     // loop for raws 
//                for(int j=0 ; j<matrix[0].size() ; j++){   // loop for coloums 
//                 if(matrix[i][j] >1000000000 || matrix[i][j]< -1000000000) return {} ;
//                     vt[j][i]  = matrix[i][j] ;
//                 }
//             }

//          return vt ;
//     }
// };