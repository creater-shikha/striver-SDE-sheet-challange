 vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        //inorder(root,v);
        TreeNode* curr=root;
        while(curr!=NULL){
        if(curr->left==NULL){
            v.push_back(curr->val);
            curr=curr->right;
        }
        else{
            TreeNode* prev=curr->left;
            while(prev->right!=NULL&& prev->right!=curr ){
                prev=prev->right;
                
            }
            if(prev->right==curr){
                prev->right=NULL;
                   v.push_back(curr->val);
                curr=curr->right;
            }
            else{
                prev->right=curr;
              
                curr=curr->left;
            }
        }}
        return v;
    }
