// this is the 229 leadcode question 
// this question concept is similar to the majority element  by n/2 
// remember in this majority element  by n/3 the maximum element can be achive is 2 ans this is very imp 

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans ;
//         int ct1 = 0 , ct2 = 0 ;
//         int el1 , el2 ; 
//         for(int i=0 ; i< nums.size() ; i++){
//               if(ct1 == 0 && el2 != nums[i] ){
//                   ct1 = 1;
//                   el1 = nums[i];
//               }

//               else if(ct2 == 0 && el1 != nums[i]  ) {
//                   ct2 = 1 ;
//                   el2 = nums[i] ;
//               }

//                else if(el1 == nums[i] )
//                            ct1++;
//                 else if(el2 == nums[i])
//                           ct2++;           
                   
//                else {
//                      ct1--  ;
//                      ct2-- ;
//                }    
              
//         }
//         ct1 =0 , ct2= 0;   // now reset the counter
//         for(int i = 0 ; i<nums.size() ; i++){
//             if(el1 == nums[i])  ct1++;  //
//            else if(el2 ==  nums[i])  ct2++;
               
//         }
        
//         if(ct1 > nums.size()/3 ) ans.push_back(el1);
//         if(ct2 >  nums.size()/3 )  ans.push_back(el2) ;

//         return ans ;
        
//     }
// };