#include<stdio.h>
using namespace std ;
#include<bits/stdc++.h>

// now we are finding the leader element 
  class solution {
    public :
             vector<int> leader(vector<int> &v1){  /// vector<int> mean we have to use the interger int the vector 
                        
                int n = v1.size() ;   // return the size of the v1 
                vector<int> v2 ;   // this how vector form 
                int j= n-1; 
                int max = INT_MIN ;
                while(j>= 0){
                    if(v1[j]> max){
                         v2.push_back(v1[j]);
                          max = v1[j];
                    }

                    j--;
               }

               return v2 ;


              }

      
 } ;

 int main(){
    int n , x ;
    cout<< "entered the no. of element ";
    cin>> n ;
    vector<int> v(n) ;
    for(int i = 0; i<n ; i++){
          cout << "enter the element ";
          cin >> x;
          v.push_back(x);
    }

    /// now this is the way to call the function when it is in vector form
    solution s; 
    vector<int> ans = s.leader(v);

    // now to print 
    for(int t :ans){
        cout << " " << t ;
    }
    return 0 ;
 }