#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int> st;
    
    public:
    Queue() {
        // Initialize your data structure here.
        
    }
    void pushQueue(int x , stack<int> &st){
        if(st.empty()){
            st.push(x);
            return;
        }
        int ele = st.top();
        st.pop();
        pushQueue(x,st);
        st.push(ele);        
    }
    void enQueue(int val) {
        // Implement the enqueue() function.
        pushQueue(val,st);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(st.empty())    return -1;
        
        int data = st.top();
        st.pop();
        return data;
    }

    int peek() {
        // Implement the peek() function here.
        if(st.empty())    return -1;
        
        return st.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return st.empty();
    }
};