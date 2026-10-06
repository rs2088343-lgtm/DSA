#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
  /// to find the union of arry 
    ///// we are making union with the unique elements
vector <int> sortedarry ( vector<int> &v1 , vector<int> &v2 ){
            
        int n1 = v1.size() ;
        int n2 = v2.size() ;
         vector<int> unionArry  ;
          int i=0;
          int j=0 ;
          while(i < n1  && j < n2){
               if(v1[i] <= v2[i]){
                  if(  unionArry.back() == 0 || unionArry.back() != v1[i]){
                        unionArry.push_back(v1[i]) ; 
                      
                  }
                  i++ ;
               }
                else {
                    if(  unionArry.back() == 0 || unionArry.back() != v2[j]){
                        unionArry.push_back(v2[j]) ; 
                      
                  }
                  j++ ;

                }
            }
            while(i<n1){
                  if(  unionArry.back() == 0 || unionArry.back() != v1[i]){
                        unionArry.push_back(v1[i]) ; 
                      
                  }
                  i++ ;

            }
            while(j<n2){
                  if(  unionArry.back() == 0 || unionArry.back() != v2[j]){
                        unionArry.push_back(v1[j]) ; 
                      
                  }
                  j++ ;

            }

            return unionArry ;
}

/// code to merge the two sorted arry

int main (){
    return 0;
}

 

