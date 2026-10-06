/// this is the KADANE'S ALGORITHM 
// here we are finding the maximum sum of sub arry 
/// in this algorithem if we find that arrsum is -ve then it turn to the 0 , and st further sum of arry 

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//            int arrSum =0 ; 
//            int maxSum = nums[0] ;
//            for(int i =0 ; i<nums.size() ; i++){
//                 arrSum = arrSum +nums[i] ;
//                 maxSum = max(arrSum , maxSum) ;

//                 if( arrSum < 0 ) 
//                   arrSum = 0 ;
//            }
//            return maxSum ; 
//     }
// };