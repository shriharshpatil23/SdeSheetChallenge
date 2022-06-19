#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> * reverse(LinkedListNode<int> *head){
	LinkedListNode<int> *pre = NULL;
	LinkedListNode<int> *nex = NULL;
	//LinkedListNode<int> *tmp ;
	
    while(head!=NULL) {
        nex = head->next;
        head->next = pre;
        pre=head;
        head=nex;
    }
    return pre;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
	if(head == NULL || head->next == NULL)	return true;
	LinkedListNode<int> *start = head;
	LinkedListNode<int> *slow = head;
	LinkedListNode<int> *fast = head;
	while(fast->next!=NULL && fast->next->next != NULL){
		slow= slow->next;
		fast = fast->next->next;
	}
	slow->next = reverse(slow->next);
	slow = slow->next;
	while(slow!=NULL){
		if(start->data != slow->data)	return false;
		
		start = start->next;
		slow = slow->next;
	}
	return true;
}