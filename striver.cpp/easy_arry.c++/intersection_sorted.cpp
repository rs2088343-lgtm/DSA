#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
  /// to find the union of arry 
    ///// we are making union with the unique elements
vector <int> sortedarry ( vector<int> &v1 , vector<int> &v2 ){
            
        int n1 = v1.size() ;    // to find the size of vector 
        int n2 = v2.size() ;
         vector<int> interArry  ;
          int i=0;
          int j=0 ;
          while(i < n1  && j < n2){ 
                   if(v1[i]<v1[j]){
                      i++;
                   } 
                  else if (v1[j] < v2[j]){
                      j++ ;
                   } 
                    else { 
                        interArry.push_back(v1[i]) ;
                           i++;
                           j++;
                      

                    } 
            }

            return interArry;
}

/// code to merge the two sorted arry

int main (){
    return 0;
}

 

