#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
// this is about the aggracive cow 
// in this we are using the function inside function
/// outside function-->> binary search and inside function --->> if it is possible
// first we find the range , here 1 to max vlaue - min value to find the distance 
// then in possible funtion we arrange the cows in ordered to find if it is possible or no t
bool possible( vector<int> arr , int mid , int c){
       int cow = 1 ;
       int n = arr.size();
       int lastone = arr[0] ;
       for(int i = 1; i< n ; i++){
         if(arr[i]- lastone >= mid){
             lastone = arr[i];
             cow++ ;
         }
         if(cow == c)
          return true ;  // true mean 1 and false mean 0 
       }

       return false ;

}



int  Aggressive_cow(vector<int> &arr , int c){ //        c-->> no. of cow  here c= 3 
    int low = 1 ; //   there is always 1 unit distance btw in any two cow
    int high = *max_element(arr.begin() , arr.end()) - *min_element(arr.begin(), arr.end());
    sort(arr.begin(), arr.end()); // sorting is important 
    int ans = -1;
    while(low <= high ){
        int mid=(low +high)/2;
        if(possible( arr ,mid ,c)==1){  // here we have to find  max value form min disatance 
            ans = mid ;
             low = mid +1 ;     // move toward the large
        }
          else{
             high = mid-1 ;     // move to the smaller one
          }
    }
    return ans ;

}

int main(){
    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;
    cout << "Largest minimum distance: " << Aggressive_cow(stalls, cows) << endl;

    return 0 ;
}
