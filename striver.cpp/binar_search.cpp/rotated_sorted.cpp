/// leet code 33 
// in this the arry is sorted than rotated 
// we just check for the left part if it sorted or not 


// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         // in rotating sorted arry tere is two part 1st is lesft and 2nd second is right 
//         // imp thing is that either left part is sorted or right will be sorted 
           // if left part is not sorted than ,its mean right part is sorted 
//         int n = nums.size();
//         int st = 0 , end = n-1 ;
       

//         while(st <= end ) {
//             int mid = (st+end)/2 ;
//             if(nums[mid] == target){
//                  return mid ;// this is only checking this target is equal to nums[mid]
//             }
//             if(nums[st]<= nums[mid]){ // this is when left part is sorted
//                 if(nums[st]<=target && target <=nums[mid]){ // this is when target lie in sorted left part
//                      end = mid -1 ;
                     
//                 }
//                 else {
//                       st = mid +1  ;
//                 }
//             }
//               
//             else{
//                 if(nums[mid]<=target && target <=nums[end]){  /// this for the right side 
//                       st = mid +1 ;
//                 }
//                 else{
//                     end = mid -1 ;
//                 }
//             }

//         }
//         return -1 ;
        
//     }
// };