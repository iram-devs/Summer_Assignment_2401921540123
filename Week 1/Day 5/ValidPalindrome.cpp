#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for (char ch : s)
        {
            if(isalnum(ch))
            {
                result +=tolower(ch);
            }
        }
        string reversed_string;
        for(int i= result.length()-1;i>=0;i--)
        {
           reversed_string.push_back(result[i]);
        }
        if(reversed_string==result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};