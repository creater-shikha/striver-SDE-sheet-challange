   TreeNode* build(vector<int>a,int i,int upp){
           if(i==a.size()||a[i]>upp)return NULL;
           TreeNode* root=new TreeNode*(a[i++]);
           root->left=build(a,i,root->val);
           root->right=build(a,i,upp);
           return root;
       } 
          TreeNode* bstFromPreorder(vector<int>& preorder) {
              return build(preorder,0,INT_MAX);
    
        
    }
