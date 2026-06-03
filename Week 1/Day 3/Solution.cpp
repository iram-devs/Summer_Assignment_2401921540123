//Question 1- MOVE ZEROES
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};

//Question 2- SQUARES OF A SORTED ARRAY
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> square;
        for(int i=0;i<nums.size();i++)
        {
            square.push_back(nums[i]*nums[i]);
        }
        sort(square.begin(),square.end());
        return square;
    }
};

//Question 3-CONTAINER WITH MOST WATER
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0 , right =height.size()-1;
        int maxArea=0;
        while(left<right)
        {
            int area = min(height[left],height[right]) * (right-left);
            maxArea = max(area,maxArea);
            if(height[left]<height[right]) left ++;
            else right--;
        }
        return maxArea;
    }
};