#include<iostream>
using  namespace std ; 
#include<vector>

// high -> lat indes
// low-> sarting indes
// now function for the merging 
        void merge (vector<int> &arr, int low, int mid, int high ){
               int left = low ;
               int right = mid +1 ;
                vector<int> temp ;
               while(left <= mid && right <= high) {
                    if(arr[left] <= arr[right] ){
                        temp.push_back(arr[left]) ;
                        left ++;
                    }
                            else{temp.push_back(arr[right]);
                                right ++;
                            }     
                 }
                 while(left <= mid){
                    temp.push_back(arr[left]);  /// now  this when the elment is left but they are sorted 
                    left ++;   //// the element are already sorted , so we are just adding that element into the temp 
                 }
                 while(right <= high ){
                    temp.push_back(right );  
                    right  ++;  
                 }
                 for(int i=0 ; i<=high ; i++){
                    arr[i] = temp[i]  ;  // now give the sorted value of temp in to the arr
                 } 
                
            }
        // this is the function for the divideing 
void mergesort(vector<int> &arr ,int low , int high ){
            if(low >=high)  return ;
            int mid = (low+high )/2;

            // here we are call the function again for the division of left side 
            mergesort(arr , low , mid);
            /// now for the right side division 
             mergesort(arr, mid+1 , high );
             merge(arr, low , mid , high );
                
}  