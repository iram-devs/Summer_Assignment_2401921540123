#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
public:
   stack <int> in,out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
       peek();
       int answer = out.top();
       out.pop();
       return answer; 
    }
    
    int peek() {
        if(out.empty())
        {
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};
