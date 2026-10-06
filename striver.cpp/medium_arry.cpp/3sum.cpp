// here we do 2 optamization in main code to avoid the repeation of group vector
// in the 4 sum problem there is 3 iptamization will be held

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         // we are using the two pointer approch
//         int n = nums.size() ; 
//         vector<vector<int>> ans ;  
//         sort(nums.begin() , nums.end()) ; // first  we have to sort the given arry 


//         for(int i=0 ; i<n ; i++){
//             // now to avoid the repeatation
//             if(i >0 && nums[i] == nums[i-1]) continue ; // mean move to nexr i or optamization 1
               
//                int j = i+1 , k = n-1 ;
                
//                 while( j < k ){
//                      int sum = nums[i] + nums[j] + nums[k] ;

//                       if( sum < 0){
//                           j++ ;
//                        }
//                       else if (sum >0 ) k-- ;

//                       else{
//                           ans.push_back({nums[i], nums[j] , nums[k]});
//                            j++ ; k--;
//                              // now after geting one ans or one triplet
//                             // now to avoid the repeatation 
//                               while(j < k && nums[j] == nums[j-1])
//                                            j++ ;            // optamization  2nd
//                         }

                        

//                 }
//         }

//         return ans ;
//         // sorting, and code of avoding repeatation  the code is very cruceal
        
//     }
// };