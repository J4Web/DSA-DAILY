class MinStack {
public:
    map<int,int> mp;
    deque<int> dq;
    MinStack() {
        
    }
    void push(int val) {
        mp[val]++;
        dq.push_back(val);
    }
    
    void pop() {
        if(mp.find(dq.back())!=mp.end()){
            mp[dq.back()]--;
            if(mp[dq.back()]==0){
                mp.erase(dq.back());
            }
        }
        dq.pop_back();
        
    }
    
    int top() {
        return dq.back();
    }
    
    int getMin() {
        int min=(mp.begin()->first);
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */