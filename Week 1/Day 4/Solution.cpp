//Question 1 -MATRIX DIAGONAL SUM
#include <vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum=0;
        int n= mat.size();
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        if(n%2!=0){
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
};

//Question 2- RESHAPE THE MATRIX
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>result(r,vector<int>(c));
        if(mat.size()*mat[0].size()!=r*c){
            return mat;
        }
        int row=0,col=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
               result[row][col]=mat[i][j];
               col++;
               if(col==c){
                row++;
                col=0;
               }
            }
        }
        return result;
    }
};

//Question 3- SPIRAL MATRIX
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rowStart=0, rowEnd=matrix.size()-1;
        int colStart=0,  colEnd=matrix[0].size()-1;
        while((rowStart<=rowEnd) && (colStart<=colEnd))
        {
            for(int i=colStart;i<=colEnd;i++)
            {
                ans.push_back(matrix[rowStart][i]);
            }
            rowStart++;
            for(int i=rowStart;i<=rowEnd;i++)
            {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd=colEnd-1;
            if(rowStart<=rowEnd){
            for(int i=colEnd;i>=colStart;i--)
            {
                ans.push_back(matrix[rowEnd][i]);
            }
            }
            rowEnd=rowEnd-1;
            if (colStart<=colEnd){
            for(int i=rowEnd;i>=rowStart;i--)
            {
                ans.push_back(matrix[i][colStart]);
            }
            }
            colStart=colStart+1;
        }
        return ans;

    }
};