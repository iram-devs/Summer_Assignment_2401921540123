#include <iostream>
#include <stack>
using namespace std;
class MinStack {
public:
stack <int> stk,minStk;
    MinStack() {
        
    }
    
    void push(int value) {
        stk.push(value);
        if(minStk.empty() || value <= minStk.top())
        {
            minStk.push(value);
        }
    }
    
    void pop() {
         if(stk.top()==minStk.top())
         {
            minStk.pop();
         }
        stk.pop();     
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};

