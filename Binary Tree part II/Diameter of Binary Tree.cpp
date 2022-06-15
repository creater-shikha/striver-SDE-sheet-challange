class Solution {
public:
    int height(TreeNode*root,int &maxi){
        if(root==NULL)return 0;
         int p=0,q=0;
         p=height(root->left,maxi);
        q=height(root->right,maxi);
      maxi=max(maxi,p+q);
        return 1+max(p,q);
    }
    int diameterOfBinaryTree(TreeNode* root) {
      int r=0;
        height (root,r);
       
            
        
        return r;
    }
};
