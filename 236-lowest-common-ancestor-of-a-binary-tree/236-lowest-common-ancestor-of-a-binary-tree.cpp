/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//time complexity=O(n)
//space complexity=O(n)
class Solution 
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root == NULL)
        {
            return NULL;
        }
        if(root->val == p->val || root->val == q->val)
        {
            return root;
        }
        
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL)
        {
            return right;
        }
        if(right==NULL)
        {
            return left;
        }
        return root;
    }
};


