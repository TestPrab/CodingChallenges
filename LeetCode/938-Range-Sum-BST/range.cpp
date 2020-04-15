
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int sum = 0;
    void dfs(TreeNode* root, int L, int R){
        if(root==NULL)
            return;
        if(root->val >= L) dfs(root->left,L,R);
        if(root->val <= R) dfs(root->right,L,R);
        if(root->val >= L && root->val <=R)
            sum+=root->val;
    }
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        dfs(root, L, R);
        return sum;
    }
};