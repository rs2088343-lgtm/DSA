  // leatcode 11 
  // to find max water container by using two pointer approch 

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//            int lp = 0 , rp = height.size() -1 ;  // n-1
//            int minheight = 0  ,  maxwater = 0;
//            while(lp < rp ){
//             int w = rp - lp ;
//             minheight = min(height[rp] , height[lp]);
//              int curwater = w * minheight ; 
//              maxwater = max(maxwater , curwater) ;   // curwater -> current water 
              
//               height[lp] < height[rp] ? lp++ :rp-- ;
//            }

//             return maxwater ;
        
//     }
// };