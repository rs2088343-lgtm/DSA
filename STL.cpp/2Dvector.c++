#include<iostream>
#include<vector>
using namespace  std ;
// here is the bacis
// 1 vector 

int main (){
    //  v[0] -> {1,3,4}  // this is the single element of outer vector 
    //   v[1]-> {5,8,5}   // this is the other element of outer vector 
    vector<vector<int>> v={{1,3,4},{5,8,5}};  // here size of v is 2
    // cout<< v[0] ;     this is wrong way to print a raw
    // v[0] -> {1,3,4} // v[0][1] ->3
    // v[1] -> {5,8,5}

        cout<< v[0][2] << endl; // this is the way to print the single element 
        for(auto x: v[0]){  // this is the way to print v[0] raw 
            cout << x <<" " ; //// here v[0] is the another vector inside the vector 
        }
        cout<< endl  << "here is the matrix " << endl ;

        // now print the whole matrix
        for(int i=0 ; i<2 ;i++){
            for(auto x: v[i]){  
                 cout << x <<" ";
             }
            cout<< endl ; 
        }

    return 0;
}