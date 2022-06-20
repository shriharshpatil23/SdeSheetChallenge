class Queue {
public:
    vector<int> queue;
    int fr;
    int rr;
    Queue() {
        // Implement the Constructor
        queue.resize(5001,-1);
        fr = 0;
        rr = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(fr == rr)    return true;
        else    return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rr == 5001)    return;
        queue[rr]=data;
        rr++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(fr == rr)    return -1;
        
        int data = queue[fr];
        queue[fr]=-1;
        fr++; 
        if(rr==fr){
            rr=0;    
            fr=0;
        }    
        return data;
    }

    int front() {
        // Implement the front() function
        if(fr==rr)    return -1;
        else    return queue[fr];
    }
};