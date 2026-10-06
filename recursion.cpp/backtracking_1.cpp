#include<stdio.h>
#include<bits/stdc++.h>
using namespace std ;

void PrintAllSubArry(vector<int> arr , vector<int> &ans , int i ){

    // base case
    if(i == arr.size()){
        for(int val : ans){  // loop to print the sub arry 
            cout << val << " ";
        }
        cout << endl; 
        return ;
    }

    // for include 
    ans.push_back(arr[i]);
    PrintAllSubArry(arr , ans , i+1) ;
        
             ans.pop_back() ;  // for backtracking  , it will delet the last element 

              // for exclude
         PrintAllSubArry(arr , ans , i+1) ;
}




int main() {

    vector<int> arr = {1,2,3};
    vector<int> ans ;
    PrintAllSubArry(arr , ans , 0) ; //  i = 0 

    return 0 ;
}
