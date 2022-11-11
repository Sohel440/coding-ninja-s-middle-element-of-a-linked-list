#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
/*int getlen(Node *head){
    int len =0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}*/

Node *getmiddle(Node*head ){
    if(head == NULL || head-> next ==NULL){
        return head;
    }
    if(head ->next-> next == NULL){
        return head->next;
        
    }
    
    Node *slow = head;
    Node* fast = head-> next;
    
    while(fast !=NULL){
        fast = fast-> next;
        if (fast !=NULL)
            fast= fast->next;
        slow = slow ->next ;
        
    }
    return slow ;
}
Node *findMiddle(Node *head) {
    // Write your code here
   /* 
    int cnt =0 ;
    int len = getlen(head);
    int ans = (len / 2);
    Node * temp = head;
    while(cnt < ans ){
        cnt ++;
        temp = temp ->next ;
    }
    return temp;
       */
    return getmiddle(head);
    
    
}