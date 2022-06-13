 vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>v;
        if(root==NULL)
            return v;
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>p=q.front();
            q.pop();
            Node*curr=p.first;
            int hd=p.second;
            if(m.find(hd)==m.end()){
                m[hd]=curr->data;
            }
            if(curr->left!=NULL){
                q.push({curr->left,hd-1});
            }
            if(curr->right!=NULL){
                q.push({curr->right,hd+1});
            }
        }
        for(auto x:m){
            v.push_back(x.second);
        }
      
        return v;
        
    }
