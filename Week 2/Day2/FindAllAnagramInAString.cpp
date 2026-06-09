#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=p.length();
        int m=s.length();
        if(m<n) return ans;
        vector<int> pCount(26,0);
        vector<int> window(26,0);

        for(int i=0;i<n;i++)
        {
            pCount[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(pCount==window){
            ans.push_back(0);
        }
        for(int i=n;i<m;i++)
        {
            window[s[i]-'a']++;
            window[s[i-n]-'a']--;
            if(pCount==window)
            {
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};