#include<iostream>
using namespace std; 

/// basecaly we are finding the no. of time a element is occurs
///   remenber that an arry has the limt 0f 1000000  but for global 10000000

int main(){
    int n ;
    cout << "enter the no. element of arry ";
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ;i++ ){
        cin >> arr[i];
    }

    /// now here is the hashing 
    int hash[13] {0};  /// here is the index depend on the entered index
        for(int i=0; i<n ;i++){
            hash[arr[i]] +=1;
        }
     cout <<"entered the no. quiery " ;
    int q ; // no. of element want to know 
    cin >> q;
    while(q--){  // run q>0 then q--
        int number ; // taking the input of the no. which i have to find
        cin >> number ;
        cout << hash[number] << endl;  // here number is the index and while going to the index we are getting the frequency of that element 
    }

    return 0;
}