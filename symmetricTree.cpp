/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool sym(TreeNode* one,TreeNode* two)
{
    if(one==NULL && two==NULL)
        return(true);
    else if(one==NULL && two!=NULL)
        return(false);
    else if(one!=NULL && two==NULL)
        return(false);
    else if(one->val!=two->val)
        return(false);
    else
    {
        bool x=sym(one->left,two->right);
        bool y=sym(one->right,two->left);
        return(x&&y);
    }
}
class Solution {
public:
    
    bool isSymmetric(TreeNode* root) {
     return(sym(root,root));   
    }
};