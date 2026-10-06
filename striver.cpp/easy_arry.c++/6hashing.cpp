#include<iostream>
using namespace std;

//// now for the character 
/// we are going to use the ASCII

int main(){
    string s; 
    cin >> s; 
     
    // pre compute 
     int hash[26]= {0} ;//// 26 for the smaller case char otherwise use the 256 for all char 
     for(int i=0 ; i<s.size() ; i++){   /// here  is implesit typecasing 
          hash[s[i]-'a'] ++;  /// things inside the value is work on the basic on ASCII value 
     }                          /// s[i] give the char but this char have the ASCII value;
    
        // for the quirey
         int  q ;   /// no. of char 
         cin >> q;
         while(q--){
            char c; 
            cin >> c; 
            // fetch 
            cout << hash[c-'a'] << endl ;
         }
    return 0;
}                                                       