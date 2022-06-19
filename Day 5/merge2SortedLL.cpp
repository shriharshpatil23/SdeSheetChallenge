#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int> *ans = new Node<int> (-1);
    Node<int> *head = ans;
    while(first && second){
        if(first->data > second -> data){
            head ->next  = new Node<int>(second -> data);
            head = head->next;
            second= second->next;
        }else{
            head ->next  = new Node<int>(first -> data);
            head = head->next;
            first= first->next;
        }
    }
    while(first){
           head ->next  = new Node<int>(first -> data);
            head = head->next;
           first= first->next;
    }
    while(second){
            head ->next  = new Node<int>(second -> data);
            head = head->next;
            second= second->next;
    }
    return ans->next;
}
