#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> current, next;
        current.push(root);

        while (!current.empty()) {
            vector<int> level;

            while (!current.empty()) {
                TreeNode* node = current.front();
                current.pop();

                level.push_back(node->val);

                if (node->left)
                    next.push(node->left);
                if (node->right)
                    next.push(node->right);
            }

            ans.push_back(level);
            swap(current, next);
        }

        return ans;
    }
};