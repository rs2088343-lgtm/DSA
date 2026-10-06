// here we divide no. of pages to the m student 
// form m division we get the maximum 
// after that a range of maximum if formed 
// and from the range of maximum we find the minimum value 
//in given arry each element is the no. of pages in each book

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

bool possible(vector<int> arr , int mid , int stu ){
    
     int st =1 ;
     int n= arr.size();
     int pages = 0 ;
     for(int i=0 ;i<n ;i++){
        if(arr[i] > mid) return false ; // this is an imp contion 
         if(arr[i]+pages <= mid){// this mean max value of pages is mid 
            pages = pages+ arr[i] ; // here we add up the pages 
            
         }
         else{
            st++; // here we need the new student to take the pages 
            pages = arr[i] ; // here we reset the value of pages to give the new student 
         }
     }
      
     return st <= stu ; // here ture or false will return 

}




// binary search code 
// range from the 0 to sum of all element 
int BookAllocate(vector<int>&arr , int stu){ // st --> no. of student 
    int low = 0 ; // there is always a 0 allotment of the pages
    int n= arr.size(); 
    int ans = -1 ;
    int high = accumulate(arr.begin(), arr.end() , 0 ) ;  // total sum of arr
    while(low <= high ){
        int mid =(low + high ) /2 ;
        if( possible(arr , mid , stu)){ // if this is true than contion will run otherwise not 
             high = mid -1 ; // mean we are searching for the minimun value  and move to the left 
             ans = mid ;
        }
        else {
             low = mid +1 ;
        }
    }

    return ans ; 

}

int main(){
    return 0 ;
}