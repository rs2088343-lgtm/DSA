#include<iostream>
using namespace std ;

// here is the function 
bool ispalindrom( int i , string &s){
    if(i>= s.size()/2 ) return true ;
    if(s[i] != s[s.size() -1-i]) return false ; 
    return ispalindrom(i+1 , s);
}
int main (){
    string  s=" madam ";
     cout << ispalindrom(0, s );
    return 0;
}