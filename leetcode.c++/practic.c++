#include<iostream>
#include<bits/c++io.h>
#include<vector>
#include<map>
using namespace std  ;


int main (){
    vector<int> v = {3,5,2,6,7,8,9};
    map<int,int> m ;
    for(int i=0 ; i<v.size() ; i++){
        m[v[i]] ++ ;
    }
    for(auto it : m){
        cout << it.first << "->" << it.second << endl ; // map always give the ans in the sorted way S

    }
    if(m.find(6) != m.end())  // because by using the find we pointed the iterater to the 6 add , if it is there ,if not then it will pointed to the end
    cout<< "the element is there ";
    return 0 ;
}