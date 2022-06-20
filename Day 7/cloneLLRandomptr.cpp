#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
   LinkedListNode<int>* curr = head;
    //Inserting values in between;
    while(curr){
        LinkedListNode<int> * tmp = curr->next;
        curr->next = new LinkedListNode<int>(curr->data);
        curr->next->next = tmp;
        curr = tmp;
    }
    //Joining therandom ptr
    curr = head;
    while(curr){
        curr->next->random = curr->random;
        curr = curr ->next ->next;
    }
    //Separting the linked lists
    LinkedListNode<int> * orig = head;
    LinkedListNode<int> * copy = new LinkedListNode<int>(0);
    LinkedListNode<int> * tmp = copy;
    while(orig){
        tmp ->next = orig ->next;
        tmp = tmp->next;
        orig -> next = orig ->next ->next;
        orig = orig ->next;
    }
    return copy ->next;
}
