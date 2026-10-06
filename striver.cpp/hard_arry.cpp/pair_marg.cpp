#include<stdio.h>
#include<bits/stdtr1c++.h>  // all function
using namespace std ;
// for lower bound // but for uppeer bound just sign will we change
// sign will change form >= to > in upper bound case 
// her  we are not using the exact  binary search
//IN lower bound we are searching for the INDEX which is grater or equal to that element 
// IN upper bounf we are finding the geatest index which is grater to target s
// remember that we are getting the just greater than element 
int lower_bound(vector<int> &arr , int  target ){
               int n = arr.size() ;
                int low = 0 ; 
                int high = n-1;
                int ans = n ;
                while(low < high ){
                    int mid = (high +mid )/2;
                    if(arr[mid] >= target) {
                          ans = mid ;
                           high = mid -1 ;
                    }    
                     else{
                          low = mid +1 ;
                      }    
                }

                return ans ;
                
}
int main(){
    return 0 ;
}