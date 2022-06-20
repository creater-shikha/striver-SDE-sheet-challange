class Solution {
public:
    bool treevalid(TreeNode* root,long long minn,long long  maxx){
        if(root==NULL)return true;
        if(root->val>=maxx||root->val<=minn)return false;
        return treevalid(root->left,minn,root->val)&&treevalid(root->right,root->val,maxx);
    }
    bool isValidBST(TreeNode* root) {
        return treevalid(root,LONG_MIN,LONG_MAX);
    }
};
