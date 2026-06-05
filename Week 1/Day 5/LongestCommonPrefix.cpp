#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last= strs[strs.size()-1];
        int i=0;
        string ans = "";
        while(i<first.size() && i<last.size() && first[i]==last[i])
        {
            ans.push_back(first[i]);
            i++;
        }
        return ans;
        
    }  
};