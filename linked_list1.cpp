#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void print(Node* &head){
//     Node* temp=head;//temprory pointer create
//     while(temp!=NULL){
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }

// }
// int main(){
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
   

//    first->next=second;
//    second->next=third;
//    third->next=fourth;
//    fourth->next=fifth;

//    cout<<"Printing the LL: "<<endl;
//    print(first);
// }









//Insertion
// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };


// // //insert a node right at head of the linked list
// void insertAtHead(Node* &head,Node* &tail,int data){
//   //check for empty list
//   if(head==NULL){
//       Node* newNode= new Node(data);
//       head=newNode;
//       tail=newNode;
//       return;
//   }
//     //step1
//     Node* newNode= new Node(data);
//     //step2
//     newNode-> next= head;
//     //step3
//     head=newNode;

// }


// //insert a node right at the end of linked list
// void insertAtTail(Node* &head,Node* &tail,int data){
//     if(tail==NULL){
//       Node* newNode= new Node(data);
//       head=newNode;
//       tail=newNode;
//       return;
//   }
//      //step1
//     //create a node
//     Node* newNode= new Node(data);
//     //step2
//     //connect with the tail node
//     tail->next=newNode;
//     //step3
//     //update tail
//     tail=newNode;
// }

// int findlength(Node* &head){
//     int len=0;
//     Node* temp= head;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }


// void insertAtPosition(int position,Node* &head,Node* &tail,int data){
//      if(head==NULL){
//       Node* newNode= new Node(data);
//       head=newNode;
//       tail=newNode;
//       return;
//   }
//  //handling edge cases
//   if(position==0){
//       insertAtHead(head,tail,data);
//       return;
//   }
//   int len= findlength(head);
//   if(position>=len){
//       insertAtTail(head,tail,data);
//       return;
//   }
//    //step1 for middle case
//   int i=1;
//   Node* prev= head;
//   while(i<position){
//       prev=prev->next;
//       i++;
//   }
//   Node* curr= prev->next;
//   //step2
//   Node* newNode= new Node(data);
//   //step3
//   newNode->next= curr;
//   //step 4
//   prev->next= newNode;
// }


// void print(Node* &head){
//     Node* temp=head;//temprory pointer create
//     while(temp!=NULL){
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }
// }


// // int main(){
// //     Node* head = NULL;
// //     Node* tail = NULL;
// //     insertAtHead(head,tail,20);
// //     insertAtHead(head,tail,40);
// //     insertAtHead(head,tail,60);
// //     insertAtHead(head,tail,90);
// //     insertAtTail(head,tail,70);
// //     insertAtPosition(6,head,tail,100);
// //     print(head);
   
// // }








// //deletion
// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     //constructor
// //     Node(){
// //         this->data=0;
// //         this->next=NULL;
// //     }
// //     Node(int data){
// //         this->data=data;
// //         this->next=NULL;
// //     }
// //     //destructor
// //     ~Node(){

// //     }
// // };
// // int findlength(Node* &head){
// //     int len=0;
// //     Node* temp= head;
// //     while(temp!=NULL){
// //         temp=temp->next;
// //         len++;
// //     }
// //     return len;
// // }

// void deleteNode(int position,Node* &head,Node* &tail){
//     //empty ll
//     if(head==NULL){
//         cout<<"LL is empty";
//         return;
//     }
//     //deleting first node
//     if(position==1){
//         Node* temp= head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//         return;

//     }
//     int len= findlength(head);

//     //deleting last node
//     if(position==len){
//         //step1
//         int i=1;
//         Node* prev=head;
//         while(i<position-1){
//             prev=prev->next;
//             i++;
//         }
//         //step2
//         prev->next=NULL;
//         //step3
//         Node* temp=tail;
//         //step4
//         tail=prev;
//         //step5
//         delete temp;
//         return;
//     }

//     //deleting middle node
//     //step1
//     int i=1;
//     Node*prev=head;
//     while(i<position-1){
//         prev=prev->next;
//         i++;
//     }
//     Node*curr=prev->next;
//     //step2
//     prev->next=curr->next;
//     //step3
//     curr->next= NULL;
//     //step4
//     delete curr;



// }
// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,40);
//     insertAtHead(head,tail,60);
//     insertAtHead(head,tail,90);
//     insertAtTail(head,tail,70);
//     insertAtPosition(6,head,tail,100);
//     deleteNode(1,head,tail);
//     deleteNode(2,head,tail);
//     print(head);
   
// }








//doubly linked list
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     //constructor
//     Node(){
//         this->data=0;
//         this->prev=NULL;
//         this->next=NULL;

//     }
//     Node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }


// };
// void print(Node* &head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout << temp -> data << " ";
//         temp=temp->next;

//     }
// }
// int getlen(Node*&head){
//     int len=0;
//     Node*temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }
// void insertAtHead(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     //step1
//     Node* newNode= new Node(data);
//     //step2
//     newNode->next=head;
//     //step3
//     head->prev=newNode;
//     //step4
//     head=newNode;
// }

// void insertAtTail(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     //step1
//     Node* newNode=new Node(data);
//     //step2
//     tail->next=newNode;
//     //step3
//     newNode->prev=tail;
//     //step4
//     tail=newNode;

// }


// void insertAtPosition(Node* &head, Node* &tail,int data,int position){
//     if(head==NULL){
//         Node* newNode= new Node(data);
//         head= newNode;
//         tail= newNode;
//         return;
//     }
//     if(position==1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len= getlen(head);
//     if(position>len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     //insertion in the middle
//     //step 1
//     int i=1;
//     Node* prevNode= head;
//     while(i < position-1){
//       prevNode= prevNode->next;
//       i++;
//     }
//     Node* curr= prevNode->next;

//     //step2
//     Node* newNode= new Node(data);

//     //step3
//     prevNode->next = newNode;
//     newNode->prev = prevNode;
//     curr->prev =newNode;
//     newNode->next= curr;
// }


// //deletion
// void deleteFromPos(Node* &head, Node* &tail,int position){
//     if(head==NULL){
//         cout<<"Can't be deleted"<<endl;
//         return;
//     }
//     if(head->next==NULL){
//         //single node
//         Node* temp= head;
//         head= NULL;
//         tail= NULL;
//         delete temp;
//         return;
//     }
//     if(position==1){
//         //delete first node
//         Node* temp =head;
//         head= head->next;
//         head->prev= NULL;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int len= getlen(head);
//     if(position==len){
//         //delete last node
//         Node* temp =tail;
//         tail= tail->prev;
//         temp->prev=NULL;
//         tail->next=NULL;
//         delete temp;
//         return;
        
//     }
//     //delete from middle position
//     //step 1
//     int i=1;
//     Node* left =head;
//     while(i<position-1){
//         left = left->next;
//         i++;
//     } 
//     Node* curr = left->next;
//     Node* right = curr-> next;
//     //step2
//     left->next=right;
//     //step3
//     right->prev=left;
//     //step 4
//     curr->next=NULL;
//     curr->prev= NULL;
//     delete curr;

// }
// int main(){
//     Node* first= new Node(10);
//     Node* second= new Node(20);
//     Node* third= new Node(40);
//     Node* head= first;
//     Node* tail= third;

//     first->next= second;
//     second->prev=first;

//     second->next=third;
//     third->prev= second;
    

//     print(first);
//     cout<<endl;
//     insertAtHead(head,tail,100);
//     insertAtTail(head,tail,200);
//     insertAtPosition(head,tail,401,5);
//     deleteFromPos(head,tail,3);
//     print(head);




// }





//Reeverse a linked list
// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void print(Node* &head){
//     Node* temp=head;//temprory pointer create
//     while(temp!=NULL){
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }

// }
// //reverse the ll
// Node* reverse(Node* &prev, Node* &curr){
//     //base case
//     if(curr==NULL){
//         return prev;//reversed linked list ka head  prev hi hoga

//     }
//     //1 case solve
//     Node* forward= curr->next;
//     curr->next= prev;

//     //recursion
//     reverse(curr,forward);
// }

// int main(){
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
   

//    first->next=second;
//    second->next=third;
//    third->next=fourth;
//    fourth->next=fifth;
   

//    Node* prev= NULL;
//    Node* curr = first;
//    first = reverse(prev,curr);
//    cout<<endl;
//    print(first);
//    cout<<endl; 


//    cout<<"Printing the LL: "<<endl;
//    print(first);
//}





//find the middle of LL
// class Node{     
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this-> data= data;
//         this-> next = NULL;
//     }

// };
// void print(Node* &head){
//     Node* temp= head;
//     while(temp!= NULL){
//         cout<< temp->data<<" ";
//         temp= temp->next;


//     }
//    cout<<endl;
// }

// Node* getmiddle(Node* & head){
//      if(head==NULL){
//         cout<<"LL IS EMPTY"<<endl;
//         return head;
//      }
//      if(head->next==NULL){
//          //1 node is there
//          return head;
//      }

//      //ll have more than 1 
//      Node* slow= head;
//      Node* fast = head;

//      while(slow!= NULL&& fast!=NULL){
//          fast= fast-> next;
//          if(fast!=NULL){
//              fast=fast->next;
//              slow= slow->next;
//          }
//      }
//     return slow;
// }
// int getlen(Node* &head){
//     int len=0;
//     Node* temp= head;
//     while(temp!=NULL){
//     temp= temp->next;
//     len++;
//     }
//     return len;

// }

// Node* reverseKnodes(Node* &head,int k){
//     if(head==NULL){
//         cout<<"LL is Empty"<<endl;
//         return NULL;
//     }
//     int len= getlen(head);
//     if(k>len){
//         cout<<"enter a valid k"<<endl;
//         return head;
//     }
//    //it means num of nodes in ll is >=k
//    //step1
//    Node* prev= NULL;
//    Node* curr= head;
//    Node* forward= curr->next;
//    int count=0;
//    while(count<k){
//        forward= curr->next;
//        curr->next= prev;
//        prev= curr;
//        curr= forward;
//        count++;
//    }
//    //recurssion part
//    if(forward != NULL){
//        //WE ARE STILL HAVING NODES THAT ARE TO BE REVERSED BY RECURSSION
//        head->next= reverseKnodes(forward,k);
//    }
//    return prev;
// }
// bool checkForLoop(Node* &head){
//     if(head==NULL){
//         cout<<"the ll is empty"<<endl;
//         return head;
//     }
//     Node* slow= head;
//     Node* fast= head;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast= fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             return true;
//         }
//     }
//     return false;
// }
// Node* startingPointLoop(Node* &head){
//     if(head==NULL){
//         cout<<"ll is empty"<<endl;
//         return NULL;
//     }
//     Node* slow= head;
//     Node* fast= head;
//     while(fast!=NULL){
//         fast= fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow= slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     while(slow!=fast){
//         slow = slow->next;
//         fast= fast->next;
//     }
//     return slow;
// }
// Node* removeLoop(Node* &head){
//     if(head==NULL){
//         cout<<"ll is empty"<<endl;
//         return NULL;
//     }
//     Node* slow= head;
//     Node* fast= head;
//     while(fast!=NULL){
//         fast= fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow= slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     Node* prev= fast;
//     while(slow!=fast){
//         prev = fast;
//         slow = slow->next;
//         fast= fast->next;
//     }
//     prev->next=NULL;
//     return slow;
// }


// int main(){
//     Node* head= new Node(10);
//     Node* second= new Node(20);
//     Node* third= new Node(30);
//     Node* fourth= new Node(40);
//     Node* fifth= new Node(50);
//     Node* sixth= new Node(60);
//     Node* seventh= new Node(70);
//     Node* eight= new Node(80);
//     Node* ninth= new Node(90);

//     head->next= second;
//     second->next=third;
//     third->next= fourth;
//     fourth->next= fifth;
//     fifth->next= sixth;
//     sixth->next= seventh;
//     seventh->next= eight;
//     eight->next= ninth;
//     ninth->next=fifth;
//     cout<< checkForLoop(head)<<endl;
//     cout<< startingPointLoop(head)->data<<endl;
//     removeLoop(head);
//     print(head);
    
//     //print(head);

//    // cout<< "Middle node is: "<< getmiddle(head)->data <<endl;
//     // head = reverseKnodes(head,4);
//     // print(head);
// }










//check palindrome
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next= NULL;

//     }
// };
// Node* reverse(Node* &head){
//     Node* prev = NULL;
//     Node* curr= head;
//     Node* next= curr->next;
//     while(curr!=NULL){
//         next= curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr= next;
//     }
//     return prev;

// }
// bool checkPalindrome(Node* &head){
//     if(head==NULL){
//         return true;
//     }
//     if(head->next==NULL){
//         return true;
//     }
//     //step1 middle
//     Node* slow=head;
//     Node* fast= head;
//     while(fast!=NULL){
//         fast= fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     //sllow is now the middle element
//     //step2 reverse
//      Node* reverseLLhead= reverse(slow->next);
//      //joining the reverse ll to the first part of ll
//      slow->next= reverseLLhead;

//      //step3 comparison
//      Node* temp1=head;
//      Node* temp2= reverseLLhead;
//      while(temp2!=NULL){
//         if(temp1->data != temp2->data){
//             return false;
//         }
//         else{
//             temp1=temp1->next;
//             temp2=temp2->next;

//         }
//      }
//      return true;
// }
// int main(){
//     Node* head= new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(20);
//     Node* fifth = new Node(10);
//     head->next= second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=NULL;
//     if(checkPalindrome(head)){
//         cout<<"Palindrome"<<endl;
//     }
//     else{
//         cout<<"not a palindrome"<<endl;
//     }

// }





//remove duplicate
//  class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next= NULL;

//     }
// };
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
// }
// Node* removeDuplicates(Node* &head){
//     Node* curr = head;
//     while(curr!=NULL){
//     if((curr->next!=NULL) && (curr->data==curr->next->data)){
//         Node* temp=curr->next;
//         curr->next=curr->next->next;
//         //delete node
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         curr=curr->next;
//     }
//   }
// }
// int main(){
//     Node* head= new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(2);
//     Node* fourth = new Node(3);
//     Node* fifth = new Node(4);
//     Node* sixth= new Node(4);
//     head->next= second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     sixth->next=NULL;
//     removeDuplicates(head);
//     print(head);
    
    
    

// }











//SORT 0s,1s and 2s

// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void print(Node* &head){
//     Node* temp=head;//temprory pointer create
//     while(temp!=NULL){
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }

// }

// void sort(Node* &head){
//     //step1
//     int zero=0;
//     int one =0;
//     int two =0;
//     Node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;
//         }
//         else if(temp->data==1){
//             one++;
//         }
//         else if(temp->data==2){
//             two++;
          
//     }
//       temp=temp->next;
//     }
//     //step 2
//     temp=head;
//     while(temp!=NULL){
//         while(zero--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(one--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(two--){
//             temp->data=2;
//             temp=temp->next;
//         }
//     }
// }



// //2nd case
// Node* sort2(Node* &head){
//     //creating dummy node
//     Node* zeroHead= new Node(-1);
//     Node* zeroTail= zeroHead;

//     Node* oneHead= new Node(-1);     
//     Node* oneTail= oneHead;

//     Node* twoHead= new Node(-1);
//     Node* twoTail= twoHead;


//     //traverse the original ll
//     Node* curr=head;
//     whi(curr!=head){
//         if(curr->data==0){
//             //take out zero wali node
//          Node* temp=curr;
//          curr = curr->next;
//          temp -> next=NULL;

//          //append the zeronode in zerohead ll
//          zeroTail->next=temp;
//          zeroTail= temp;
//         }
//         else if(curr->data==1){
//          Node* temp=curr;
//          curr = curr->next;
//          temp -> next=NULL;
//          oneTail->next=temp;
//          oneTail= temp;
            
//         }
//         else if(curr->data==2){
//          Node* temp=curr;
//          curr = curr->next;
//          temp -> next=NULL;
//          twoTail->next=temp;
//          twoTail= temp;
            
//         }
//     }
//     //ab 3 ll ko join krna h


//     //remove dummy node
//     //modify one wali list
//     Node* temp= oneHead;
//     oneHead= oneHead->next;
//     temp->next=NULL;
//     delete temp;

//     //modify two wali list
//     temp= twoHead;
//     twoHead= twoHead->next;
//     temp->next=NULL;
//     delete temp;

//     //join list
//     if(oneHead!=NULL){
//         //ONE WWALI list is non empty
//         zeroTail->next=oneHead;
//         if(twoHead!=NULL){
//             oneTail->next=twoHead;
//         }
//         else{
//             //one list is empty
//             if(twoHead!=NULL){
//                 zeroTail=twoHead;
//             }
//         }
//         //REMOVE ZEROhead dummynode
//         temp=zeroHead;
//         zeroHead=zeroHead->next;
//         temp->next=NULL;
//         delete temp;
//         //return head of the modified ll
//          return zeroHead;
//     }
       
        



// }

// int main(){
//     Node* first=new Node(0);
//     Node* second=new Node(1);
//     Node* third=new Node(2);
//     Node* fourth=new Node(0);
//     Node* fifth=new Node(2);
//     first->next= second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=NULL;

//     //print(first);
//     sort(first);
//     print(first);
//     sort2(first);
//     print(first);

// }







//add two numbers represented by a linked list
    class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};

void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = curr -> next;
        while(curr != NULL) {
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
        }
        return prev;
}
Node* solve(Node* &head1, Node* &head2) {

        if(head1 == NULL)
                return head2;
        if(head2 == NULL)
                return head1; 

        //step1 : reverse both linked list
        head1 = reverse(head1);
        head2 = reverse(head2);

        //step2: add both linked list
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        int carry = 0;

        while(head1 != NULL && head2 != NULL) {
                //calculate sum
                int sum = carry + head1 -> data + head2 -> data;
                //find digit to create node for
                int digit = sum % 10;
                //calculate carry
                carry = sum / 10;

                //create a new Node for the digit
                Node* newNode = new Node(digit);
                //attach the newNode into the answer wali linked list
                if(ansHead == NULL) {
                        //first node insert krre ho
                        ansHead = newNode;
                        ansTail = newNode;
                }
                else {
                        ansTail -> next = newNode;
                        ansTail = newNode;
                }
                head1 = head1 -> next;
                head2 = head2 -> next;
        }

        //jab head1 list ki length head2 list se jada hogi
        while(head1 != NULL) {
                int sum = carry + head1 -> data;
                int digit = sum % 10;
                carry = sum / 10;
                Node* newNode = new Node(digit);
                ansTail -> next = newNode;
                ansTail = newNode;
                head1 = head1 -> next;
        }

        //jab head2 list ki length head1 list se jada hogi
        while(head2 != NULL) {
                int sum = carry + head2 -> data;
                int digit = sum % 10;
                carry = sum / 10;
                Node* newNode = new Node(digit);
                ansTail -> next = newNode;
                ansTail = newNode;
                head2 = head2 -> next;
        }

        //handle carry ko alag se
        while(carry != 0) {
                int sum = carry;
                int digit = sum % 10;
                carry = sum / 10;
                Node* newNode = new Node(digit);
                ansTail -> next = newNode;
                ansTail = newNode;
        }


        //step3: reverse the ans linked list
        ansHead = reverse(ansHead);
        return ansHead;
}

int main() {
        Node* head1 = new Node(9);
        Node* second1 = new Node(9);
        head1 -> next = second1;

        Node* head2 = new Node(9);
        Node* second2 = new Node(9);
        // Node* third2 = new Node(4);
        head2 -> next = second2;
       // second2 -> next = third2;

        Node* ans = solve(head1, head2);

        print(ans);


        return 0;
}