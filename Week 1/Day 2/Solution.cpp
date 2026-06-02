// Question 1- MAXIMUM SUBARRAY
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
        
    }
};

//Question 2- CONTAINS DUPLICATE
#include <vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dupe=-1;
        for(int i=1;i<nums.size();i++)
        {
          if(nums[i]==nums[i-1])
          {
            dupe=1;
          }
        }
        if (dupe==-1){
            return false;
        }
        else{
            return true;
        }
        
    }
};

//Question 3- MAXIMUM AVERAGE SUBARRAY 1
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double avg =0.0;
        double ans =0.0;
        int sum;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        avg = sum * 1.0/k;
        ans =avg;
        for(int i=k;i<nums.size();i++)
        {
            sum += nums[i]-nums[i-k];
            avg = sum * 1.0/k;
            ans = max(ans,avg);
        }
        return ans;
         
    }
};