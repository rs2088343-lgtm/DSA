#include<iostream>
using namespace std ;
// doing the swaping using function 
// calling the function is the pass by referencd

    void f(int i, int arr[], int n){
        if(i>=n/2) return ;
        swap(arr[i],arr[n-i-1]);  // here we are using the swap inbuild function
        f(i+1 ,arr , n);    // recursive call of the arry 
    }


int main (){
    int n  ;
    cout << "entered the no. of element ";
    cin >> n ;
    cout << " enter the each element ";
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    f(0 , arr , n );   // we always pass the name of the arry 
    for(int i=0; i<n ; i++) cout << arr[i] <<" " ;


    return 0 ;
}