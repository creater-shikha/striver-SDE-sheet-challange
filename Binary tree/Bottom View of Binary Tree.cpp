
    vector <int> bottomView(Node *root) {
    vector<int>v;
    map<int,int>m;
queue<pair<Node*,int>>q;
q.push({root,0});

m[0]=root->data;

    // bottom(root,v);
    while(!q.empty()){
        Node *curr;
           int level=q.front().second;
        curr=q.front().first;
        q.pop();
     
          m[level]=curr->data;
        if(curr->left!=NULL){
         

        // if(m.count(level)==1){
        //   m.erase(level);
        // }
       
            q.push({curr->left,level-1});
        }
        if(curr->right!=NULL){
         
            
      
            q.push({curr->right,level+1});
        }
        
        
    }
    for(auto x:m){
        v.push_back(x.second);
    }
    return v;
    
    }
