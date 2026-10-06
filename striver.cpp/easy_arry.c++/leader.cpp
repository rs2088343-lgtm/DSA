#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 

/// we are using the class ans make the functio in the form of the vector 
/// here we are passing the vector address ;

class solution{
    public :
vector<int> superElement(vector<int> &nums){
     vector<int> ans ;
     int maxi = INT_MIN ;
     int n = nums.size() ;
     for(int i = n-1 ; i>0 ; i--){
         if(nums[i] > maxi){
            ans.push_back(nums[i]) ; 
         }
         maxi = max(maxi , nums[i]) ;
     }
       sort(ans.begin() , ans.end()) ;
        return ans ;
}
};
 
//find the leader -> mx element from the right 
int main() {
    return 0 ;
}


    