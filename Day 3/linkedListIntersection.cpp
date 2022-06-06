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

int findIntersection(Node *firstHead, Node *secondHead)
{
//     //Write your code here
//     Node * a = firstHead;
//     Node * b = secondHead;
//     while(a != b){
//         if(a == NULL)    a=secondHead;
//         else    a=a->next;
//         if()
//     }
    unordered_set<Node *> s;
     Node * a = firstHead;
     Node * b = secondHead;
    while(a!=NULL){
        s.insert(a);
        a=a->next;
    }
    while(b!=NULL){
        if(s.find(b)!=s.end())    return b->data;
        
        b=b->next;
    }
    return -1;
}