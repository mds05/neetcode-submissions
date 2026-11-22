/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <queue>
using namespace std;
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return root;
        // queue<TreeNode*> q;
        // q.push(root);
        // while(q.size()>0){
        //     TreeNode* curr=q.front();
        //     q.pop();
        //     if(curr->right!=nullptr){
        //         q.push(curr->right);
        //     }
        //     if(curr->left!=nullptr){
        //         q.push(curr->left);
        //     }
        // }
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;

    }
};
