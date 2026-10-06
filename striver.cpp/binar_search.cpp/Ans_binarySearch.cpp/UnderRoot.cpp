// now we are using the binary search to find the ans 
#include<iostream>
using namespace std ;

int floorSqrt(int n){
     int low = 1 , high = n ;
     int ans ;
     while(low <= high){
        long long  mid =(low + high )/2;
        long long val =(mid*mid);// we this 
        if(val<= n ){ // this will give just small or same 
            ans = mid ;
            low = mid +1;
        }
        else{
             high= mid - 1;
        }
     }
     return ans ;
}

int main(){
    int n ;
  cout <<"enter the no." ;
  cin >> n;
  cout << "square root of " << n << "is" <<floorSqrt(n) ;
  return 0;

}