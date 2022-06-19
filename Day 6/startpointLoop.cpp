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

Node *firstNode(Node *head)
{
	//    Write your code here.
    Node * slow = head;
    Node * fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)    break;
    }
    if(fast == NULL || fast->next==NULL)    return NULL;
    
    slow = head;
    int pos = 0;
    while(slow != fast){
        pos++;
        slow = slow->next;
        fast = fast ->next;
    }
    while(pos--){
        head = head ->next;
    }
    return head;
}