/*
1. Check if v1 or v2 are in the root. If yes, then that is the lca. 
2. Check in right subtree and left subtree.if both are not null then v1 and v2 are present in different subtrees.
return the root in this case. 
3. If they are in the same subtree then check which one and return accordingly. 
*/


Node *lca(Node *root, int v1,int v2) {
        
        if (root == NULL)
            return NULL;
        
        if (root->data == v1  || root->data == v2)
            return root;
        
        
        Node *left_tree = lca(root->left, v1, v2);
        Node *right_tree = lca(root->right, v1, v2);
        
        if (left_tree !=NULL && right_tree !=NULL)
            return root;
        
        if (left_tree != NULL)
            return left_tree;
        else
            return right_tree;
    }
