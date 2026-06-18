#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stk;
        for(string s: tokens)
        {
            if(s=="+"|| s=="-"|| s=="*"|| s=="/")
            {
                int y= stk.top();
                stk.pop();
                int x= stk.top();
                stk.pop();
                if(s=="+") stk.push(x+y);
                else if(s=="-") stk.push(x-y);
                else if(s=="*") stk.push(x*y);
                else stk.push(x/y);
            }
            else{
             stk.push(stoi(s));
            }
        }
        return stk.top();
    }
};