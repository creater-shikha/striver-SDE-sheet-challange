  vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
      // preorder(root,v);
//       morris preorder
      TreeNode* curr=root;
      while(curr!=NULL)
      {
          if(curr->left==NULL){
              v.push_back(curr->val);
              curr=curr->right;
          }
          else{
              TreeNode* prev=curr->left;
              while(prev->right!=NULL&& prev->right!=curr){
                  prev=prev->right;
              }
              if(prev->right==NULL){
                  prev->right=curr;
                  v.push_back(curr->val);
                  curr=curr->left;
              }
              else{
                  prev->right=NULL;
                  curr=curr->right;
              }
          }
      }
          return v;
    
        
    }
