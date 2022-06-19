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
// LinkedListNode<int>* reverse(LinkedListNode<int> *head){
// 	LinkedListNode<int>* curr=head;
// 	LinkedListNode<int>* prev = NULL;
// 	LinkedListNode<int>* tmp;
// 	while(curr){
// 		tmp = curr->next;
// 		curr->next = prev;
// 		prev = curr;
// 		curr = tmp;
// 	}
// 	return prev;
// }
int len(LinkedListNode<int> *head){
	int ans = 0;
	while(head){
		ans++;
		head=head->next;
	}
	return ans;
}
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
	if(head==NULL || K==0)	return head;
	int x = len(head) - K + 1;
	
    
    LinkedListNode<int> *curr = head;
    if(x==1){
        head = head->next;
        return head;
    }
    while(x>2){
        curr = curr->next;
        x--;
    }
    curr->next = curr->next->next;
    return head;
}