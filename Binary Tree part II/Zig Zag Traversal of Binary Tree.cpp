class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      
      
        queue<TreeNode*>q;
        vector<vector<int>>vec;
          if(!root){
            return vec;
        }
        q.push(root);
             int count=0;
        while(!q.empty()){
            int size=q.size();
           
            vector<int>v;
           count++;
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
                if(count%2==0&&i==size-1){
                    reverse(v.begin(),v.end());
                }
            }
            vec.push_back(v);
        }
     return vec;   
        
    } 
    
};
