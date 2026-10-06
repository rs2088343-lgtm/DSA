  //one thing to be noted , that the majority element must be present in the arry 
 /// here we are using the moore 's voting algorithm 
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int fre =0 , ans = 0;
//         for(int i = 0 ; i<nums.size() ; i++){
//               if(fre == 0)
//                 ans = nums[i] ; 

//                   if(ans == nums[i])
//            fre ++ ;

//            else fre --;
//         }  
//             return ans ;

        
//     }
// };