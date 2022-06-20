class Solution {
public:
   
    int maxpath(TreeNode* root,int &maxx){
       if(root==NULL)return 0;    
         int leftsum=max(0,maxpath(root->left,maxx));
         int rightsum=max(0,maxpath(root->right,maxx));
          maxx=max(maxx,leftsum+rightsum+root->val);
      
        return max(leftsum,rightsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
     
       int maxx=INT_MIN;
        maxpath(root,maxx);
        return maxx;
      
        
    }
};
