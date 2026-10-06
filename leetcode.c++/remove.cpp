/// this is the code for the remove of the occurence of the substring 

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
           
//             // if(s.length() <1 || s.length() >1000 || part.length() <1 || part.length() >1000) 
//             //     return ;
            
//         while(s.find(part) != string::npos){
//             s.erase(s.find(part), part.length()) ;
//         }
//                 return s;
//      }

// }; 


// /// another while loop
// while(s.length() > 0 && s.find(part) < s.length()){
//             s.erase(s.find(part), part.length()) ;
//         }
//                 return s;
//      }




// this is recursive  way to solve 

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//                int length = part.length() ;
//                   if(s.find(part)>s.length()){
//                      return s;
//                   }

//                   s.erase(s.find(part), length) ;
                   
//                    return  removeOccurrences(s ,part) ;
        
//     }
// };