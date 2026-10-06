#include<iostream>
using namespace std ;
#include<bits/stdc++.h>
  
//  we are  printing the divisor  with help of vector 
// now making the function of that // / this is use for the dividing 
/// be aware of loop and value which you are give 

void printdivisors(int n ){  
    vector<int> sh ;     // here we are using the vector to store the no. and futher sorting 
    for(int i=1 ; i<=sqrt(n); i++){  // loop should be fanite 
        if(n%i ==0){
             sh.push_back(i);
        }
        if((n/i !=i)){
            sh.push_back(n/i);  // here we are puching the dividing value which gon to dive n 
        }
    }
    sort(sh.begin(), sh.end());   // here we are doing the sorthing by using the function 
    for(auto val : sh){     /// heir is the another way to run loop
        cout << val << " "  ;
    }

}

int main (){
    int x;
    cout << "enter the no. to find the divisor : ";
    cin >> x; 
    printdivisors(x);
}
    
