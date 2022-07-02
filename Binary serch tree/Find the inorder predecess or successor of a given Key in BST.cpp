void sucs(Node *root,Node*& suc, int key){
    while(root!=NULL){
    if(root->key>key){
        suc=root;
        root=root->left;
    }
    else{
        root=root->right;
    }
}

}
void pres(Node *root,Node*& pre, int key){
 
Node * curr=root;
while(curr!=NULL){
 if(curr->key<key){
        pre=curr;
       curr= curr->right;
    }
    else{
        curr= curr->left;
    }
}

}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    int k=key;
pres(root,pre,k);
  sucs(root,suc,k);

// Your code goes here

}
