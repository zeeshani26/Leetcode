class MinStack {
    std::stack<int> baseStack;
    std::stack<int> minStack;

public:
    MinStack() {}

    void push(int val) {
        baseStack.push(val);
        if (minStack.empty() || minStack.top() > val) {
            minStack.push(val);
        }
    }

    void pop() {
        if (minStack.top() == baseStack.top()) {
            baseStack.pop();
            minStack.pop();
        } else {
            baseStack.pop();
        }
    }

    int top() { return baseStack.top(); }

    int getMin() { return minStack.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */