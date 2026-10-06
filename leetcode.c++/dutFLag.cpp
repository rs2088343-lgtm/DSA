// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//           int n = nums.size() ;
//              int mid = 0 , low = 0 , high = n -1 ;
//              while(mid <= high ){
//                  if(nums[mid] == 0 )    /// this is for the  0
//                  { 
//                      swap(nums[mid] , nums[low]) ; 
//                       low ++; 
//                        mid ++ ; 
//                  }
//                     else if(nums[mid] == 1) mid ++ ;    this is for the  1 
//                      else {
//                         swap(nums[mid], nums[high]) ;    this is for the 2 
//                         high --;
//                      }
//              }
        
//     }
// };