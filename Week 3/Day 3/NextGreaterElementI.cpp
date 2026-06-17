#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack <int> stk;
        for(int num:nums2)
        {
            while(!stk.empty() && stk.top()<num)
            {
                m[stk.top()]=num;
                stk.pop();
            }
            stk.push(num);
        }
        while(!stk.empty())
        {
            m[stk.top()]=-1;
            stk.pop();
        }
        vector <int> res;
        for(int num: nums1)
        {
            res.push_back(m[num]);
        }
        return res;
    }
};