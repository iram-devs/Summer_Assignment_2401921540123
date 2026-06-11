#include <string>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<int> chars;

        int num=0;
        for (char c:s)
        {
            if(isdigit(c))
            {
                num = num * 10 + (c-'0');
            }
            else if(c=='[')
            {
                nums.push(num);
                num=0;
                chars.push(c);
            }
            else if(c==']')
            {
                string temp= "";
                while(!chars.empty()&& chars.top()!='[')
                {
                    temp +=chars.top();
                    chars.pop();
                }
                chars.pop();
                reverse(temp.begin(),temp.end());
                int k = nums.top();
                nums.pop();

                string decoded ="";
                while(k--)
                {
                    decoded +=temp;
                }
                for(char m:decoded)
                {
                    chars.push(m);
                }
            }
            else
            {
                chars.push(c);
            }
        }
        string ans="";
        while(!chars.empty())
        {
            ans += chars.top();
            chars.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};