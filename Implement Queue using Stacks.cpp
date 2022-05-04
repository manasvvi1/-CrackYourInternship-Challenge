//  https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
    stack<int> stk1, stk2;
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
        }
        stk1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {  
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        
        int temp = stk2.top();
        stk2.pop();
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        
        int temp = stk2.top();
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk1.empty() && stk2.empty();
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