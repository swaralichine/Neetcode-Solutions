/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
//Recursive approach
//Time Complexity = O(n)
//Space Complexity = O(n)
class Solution 
{
public:
    vector<int> ans;
    vector<int> preorder(Node* root) 
    {
        if(root == NULL)
        {
            return ans;
        }
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            preorder(root->children[i]);
        }
        return ans;
    }
};

