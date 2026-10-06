#include<iostream>
using namespace std ;
#include<climits>  // this  has to be include 

int main(){
    int a[7] = {7,7,7,7,9,7,7};
    int largest = a[0];
    int selargest = INT_MIN;
    for(int i = 0 ; i<7 ; i++){
         if(a[i] > largest){
            selargest = largest ;
            largest =a[i];
              
         }
         if(a[i] > selargest && a[i] < largest){
            selargest = a[i] ;
         }
    }
     cout << selargest ;

    return 0;
}