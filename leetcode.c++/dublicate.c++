
 /// this is wost approch beacuse it time comx-> nlogn


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         set<int> st;

//         for (auto x : nums) {
//             st.insert(x);
//         }

//         int i = 0;
//         for (auto x : st) {
//             nums[i] = x;
//             i++;
//         }

//         return st.size();   // ✅ return number of unique elements
//     }
// };
