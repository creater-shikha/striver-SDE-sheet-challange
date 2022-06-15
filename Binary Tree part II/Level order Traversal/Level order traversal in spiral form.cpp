class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      
        queue<TreeNode*>q;
        vector<vector<int>>vec;
          if(!root){
            return vec;
        }
        q.push(root);
        while(!q.empty()){
            int size=q.size();
           
            vector<int>v;
           
            for(int i=0;i<size;i++){
              TreeNode* curr=q.front();  
                 q.pop();
                v.push_back(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                 if(curr->right){
                    q.push(curr->right);
                }
            }
            vec.push_back(v);
        }
     return vec;   
        
    }
};
