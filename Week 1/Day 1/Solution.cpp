//Question 1 - TWO SUM
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int left=0 , right=v.size()-1;
        while(left<right)
        {
            int sum=v[left].first+v[right].first;
            if(sum==target)
            {
                return{v[left].second,v[right].second};
            }
            else if(sum<target)left++;
            else right--;
            }
            return{};
        
        
    }
};

//Question 2- REMOVE DUPLICATES FROM SORTED ARRAY
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int replace=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[replace]=nums[i];
                replace++;
            }
        }
        return replace;
        
    }
};

//Question 3- BEST TIME TO BUY AND SELL STOCK
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit=0;
         int minPrice=INT_MAX;
         for(int i=0;i<prices.size();i++)
         {
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
         }
         return maxProfit;
        
    }
};