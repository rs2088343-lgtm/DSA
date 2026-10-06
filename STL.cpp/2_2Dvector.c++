#include<iostream>
#include<vector>
using namespace  std ;
// 2 vectot 

int main (){
    vector<vector<int>> v={{1,3,4},{5,8,5}};  // here size of v is 2

        cout<< v[0][2] << endl;
         
        for(auto x: v[0]){  // this is the way to print v[0] raw 
            cout << x <<" " << endl;
        }
        cout << "here is the matrix " << endl ;

        for(int i=0 ; i<v.size() ;i++){     // instid of 2 , we use v.size
            for(auto x: v[i]){  
                 cout << x <<" ";
             }
            cout<< endl ; 
        }
     

        // now to find the number of element in the single raw 
        cout<< "here is the no. of element in the single raw "<< endl  << v[0].size();

    return 0;
}