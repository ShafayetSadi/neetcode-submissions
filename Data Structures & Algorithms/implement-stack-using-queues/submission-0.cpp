class MyStack {
    queue<int> qa;
    queue<int> qb;
public:
    MyStack() {
    }
    
    void push(int x) {
        qa.push(x);
    }
    
    int pop() {
        while(qa.size() > 1) {
            qb.push(qa.front());
            qa.pop();
        }

        int res = qa.front();
        qa.pop();

        while(!qb.empty()) {
            qa.push(qb.front());
            qb.pop();
        }
        return res;
    }
    
    int top() {
        while(qa.size() > 1) {
            qb.push(qa.front());
            qa.pop();
        }

        int res = qa.front();
        qb.push(qa.front());
        qa.pop();

        while(!qb.empty()) {
            qa.push(qb.front());
            qb.pop();
        }
        return res;
    }
    
    bool empty() {
        return qa.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */