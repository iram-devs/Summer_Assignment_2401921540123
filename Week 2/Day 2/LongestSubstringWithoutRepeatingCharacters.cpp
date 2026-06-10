#include <string>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        int left =0;
        unordered_set<char> charset;
        for(int right=0;right<s.length();right++)
        {
            while(charset.count(s[right]))
            {
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
            maxLength = max(maxLength,right-left+1);
        }
        return maxLength;
        
    }
};
