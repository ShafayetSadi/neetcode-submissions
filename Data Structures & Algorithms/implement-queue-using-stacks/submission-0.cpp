class MyQueue {
    stack<int> sa;
    stack<int> sb;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        sa.push(x);
    }
    
    int pop() {
        while(sa.size() > 1) {
            sb.push(sa.top());
            sa.pop();
        }

        int res = sa.top();
        sa.pop();

        while(!sb.empty()) {
            sa.push(sb.top());
            sb.pop();
        }
        return res;
    }
    
    int peek() {
        while(sa.size() > 1) {
            sb.push(sa.top());
            sa.pop();
        }

        int res = sa.top();
        sb.push(sa.top());
        sa.pop();

        while(!sb.empty()) {
            sa.push(sb.top());
            sb.pop();
        }
        return res;
    }
    
    bool empty() {
        return sa.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */