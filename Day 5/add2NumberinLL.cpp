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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
	Node *res = new Node(0);
	Node *ans = res;
	int carry = 0;
	while(head1!=NULL && head2 !=NULL){
		int sum = head1->data + head2->data + carry;
		carry = sum/10;
		int d = sum%10;
		ans->next = new Node(d);
		head1=head1->next;
		head2=head2->next;
		ans = ans->next;
	}
	
	while(head1 != NULL ){
		int sum = head1->data + carry;
		int d = sum%10;
		carry = sum/10;
		ans->next = new Node(d);
		ans = ans->next;
		head1=head1->next;
	}

	while(head2 != NULL){
		int sum = head2->data + carry;
		int d = sum%10;
		carry = sum/10;
		ans->next = new Node(d);
		ans=ans->next;
		head2=head2->next;
	}
	if(carry >0){
		ans ->next = new Node(carry);
		ans = ans ->next;
	}
	return res->next;
}