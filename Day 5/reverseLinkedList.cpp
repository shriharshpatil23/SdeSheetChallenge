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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
	LinkedListNode<int> *curr = head;
	LinkedListNode<int> *tmp ;
	LinkedListNode<int> *prev=NULL;
	while(curr){
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	return prev;
}



