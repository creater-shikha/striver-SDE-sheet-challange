  vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>vec;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>m;
        q.push({root,{0,0}});
        // vector<int>v;
        // v.push_back(root->val);
        // m[0]=v;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            auto x=it.second;
            TreeNode* curr=it.first;
            int level=x.second;
            int line=x.first;
             m[line][level].insert(curr->val);
       
            
           
          
       
            if(curr->left!=NULL){
                q.push({curr->left,{line-1,level+1}});
            }
             if(curr->right!=NULL){
                q.push({curr->right,{line+1,level+1}});
            }
        }
        for(auto x:m){
            vector<int>col;
            for(auto p:x.second)
            
            col.insert(col.end(),p.second.begin(),p.second.end());
            vec.push_back(col);
        }
        return vec;
    }
