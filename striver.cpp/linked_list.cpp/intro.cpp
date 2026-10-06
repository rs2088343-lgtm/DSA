
#include <iostream>
using namespace std ;
class Node {
    public :
    int data ;
    Node *next ;
    
    // now we are making the constructor 
     Node( int data1 , Node *next1){
          data = data1 ;
          next = next1;
     }
      // this is the constructor it behave like the function 
     Node( int data2){ // only data constructor 
              data = data2 ;
              next = nullptr ;
          }
};

// now function to add header  , in this we are taking the address and we are returning the address  
  Node *AddHead(Node *head , int k){ // k is the element
       Node *temp = new Node(k) ;
       temp->next= head ;
       head = temp ;
       
      return head ; // return is address
  }

   
  // function to insert the element in k place ;
   Node *Insert(Node *head , int k , int ele){
       if(k==1) return AddHead(head , ele);
        Node *temp = head;
        for(int i =1 ; i <= k-2 ; i++){
            temp = temp->next ; 
            
        }
        Node *jn =temp->next ;
          temp->next = new Node(ele) ;
          
          temp->next->next = jn ;
          
          return head ;
   }
   
   

int main() {
   int  arr[6] = {1,4,5,6,7,8} ;
   Node *head = new Node(arr[0]);
   cout << head->data  << "     "<< head <<endl ;
   Node *temp = head ;
   for(int i = 1 ; i <6 ; i++){
       cout << temp->data  << "  " << temp <<endl;
       temp->next = new Node(arr[i]) ;
       temp = temp->next ;
   }
   
   
   int x ;
   cout <<  "enter the new element "   ;
   cin >> x ;
   head = AddHead( head, x) ;  // here we update the head 


//   cout << head->data  << "     "<< head <<endl;
    // cout << y->data  << "     "<< y <<endl;


     cout <<endl ;
    Node *temp1 = head;
     while(temp1 != nullptr){
         cout << temp1->data  << "  " << temp1 <<endl;
         temp1 = temp1->next ;
     }
   
   
 
    

    return 0;
}