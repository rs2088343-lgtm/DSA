#include<iostream>
using namespace std ;  
// now printing the fibo series by using the function 
int fibo(int n){
    if(n<=0 ||n>=30 ) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2) ;
}

// ->1 1 2 3 5 8 13 21 34 55 .....
int main (){
    int n; 
    cout << "enter the no. of term ";
    cin >> n;
    cout << fibo(n);
  
    return 0;   
}






















// #include<iostream>
// using namespace std ;  
// // this is the series we have to print 
// // 1 1 2 3 5 8 13 21 34

// int main (){
//   int n ;
//   int a =0 , b=1 , c ;
//   cout << "enter the no. of term ";
//   cin >> n;
//   if(n==1){
//     cout << 1 ;
//   } 
//   else {
//     for(int i=1 ; i<n ; i++){
//         c = a+b;
//         a =b ;
//         b = c;
//     }
//     cout << c; 
    
//   }

//     return 0;   
// }