#include<stdio.h>
using namespace std ;
#include<bits/stdc++.h>
// if we find  zero so convert all element  of it correspoing raw and caloum into the zero
// here we are uisng the class 
// now make the vector function 
/// matrix -->> is the name of 2d vector 
// n*m = dimenstion of metrix
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int m, int n){
          int  raws[n] ={0}; // we make extra arry for the raws
          int clo[m] ={0};  /// arry for colum and initialize with 0
          for(int i=0 ;i<n ; i++){
             for(int j=0; j<m ; j++){
                  if(matrix[i][j] == 0){
                      raws[i] = 1;
                      clo[j] = 1;
                  }
             }
          }

          // now make the colum and raw to be zero
          for(int i =0; i<n ; i++){
              for(int j = 0; j<m ; j++){
                  if(raws[i]==0 || clo[j]== 0){
                      matrix[i][j] = 0 ;
                  }
              }
          }
}


class solution {
    public  :
} ;

int main(){
    return 0;
}