/// subarray sum equals k  
//   we use the unorderded map for hashing 
// time compex -> o(n)


// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size() ;
//          int count = 0 ;
//          vector<int> prefixSum(n , 0) ;   /// n-> size , 0 -> each have 0 element 
//          prefixSum[0] = nums[0] ;
//          for(int i=1 ; i<n ; i++){
//             prefixSum[i] = prefixSum[i-1] + nums[i] ;
//          }
//             unordered_map<int ,int > m;  /// prfix , frequency 


//          for(int j=0 ; j<n ; j++){
//             if(prefixSum[j] == k) count ++ ;

//             int val = prefixSum[j] - k ;
//             if(m.find(val) != m.end()){   /// this mean does value exist in  map if yes then hit the condition 
//                 count += m[val] ;   // mean frequency at that val
//             }
//             if(m.find(prefixSum[j]) == m.end()){
//                  m[prefixSum[j]] = 0;
//             }
//             m[prefixSum[j]] ++;  /// this help to note the freq of prefisum element 
//          }
//           return count ;
        
//     }
// };