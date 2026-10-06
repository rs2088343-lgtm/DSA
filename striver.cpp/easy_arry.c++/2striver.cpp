#include<iostream>
using namespace std ;
#include<bits/stdc++.h>
  
/// check foir prime  by using the squart root method 
int main (){
    int n ;
    cout << "enter the no. :";
    cin >> n ;
    int count =0;
    for(int i=1 ; i*i<=n; i++){
        if(n%i==0){
             count ++;
              if((n/i)!=i) count ++ ;
        }
    }
    if(count == 2) cout << " prime ";
     else cout << "not prime " ;
}