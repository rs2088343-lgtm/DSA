#include<stdio.h>
using namespace std ;

int main(){
    int n ; // here is the size of arry 
    /// now most imp thing a 
    int arr[10];
    for(int i =0 ; i<n ; i++){
        // here 1st condition for the left and seconf for the right 
        if((i==0 ||arr[i-1] <arr[i])&&((i=n-1))||(arr[i]>arr[i+1])){

        }

    }
    return 0;
}