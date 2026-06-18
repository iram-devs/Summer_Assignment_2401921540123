#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int n = heights.size();
        stack<int> stk;
        int ans = 0;

        for (int i = 0; i <= n; i++) {
            while (!stk.empty() &&
                   (i == n || heights[stk.top()] >= heights[i])) {

                int h = heights[stk.top()];
                stk.pop();

                int right = i;
                int left = stk.empty() ? -1 : stk.top();

                int width = right - left - 1;
                ans = max(ans, h * width);
            }

            stk.push(i);
        }

        return ans;   
    }
};