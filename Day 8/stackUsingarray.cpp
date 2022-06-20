// Stack class.
class Stack {
    
public:
    vector<int>  st;
    int tp;
    
    Stack(int capacity) {
        // Write your code here.
        st.resize(1001);
        tp = -1;
    }

    void push(int num) {
        // Write your code here.
        tp++;
        st[tp]=num;
    }

    int pop() {
        // Write your code here.
        if(tp== -1)    return -1;
        
        int data = st[tp];
        st[tp]=0;
        tp--;
        return data;
    }
    
    int top() {
        // Write your code here.
        if(tp == -1)    return -1;
        return st[tp];
    }
    
    int isEmpty() {
        // Write your code here.
        if(tp== -1)    return 1;
        else    return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(tp==1000)    return 1;
        else    return 0;
    }
    
};