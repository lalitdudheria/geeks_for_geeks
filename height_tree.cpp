int height(Node* root) {
        // Write your code here.
        
        if (root == NULL)
            return 0;
        
        if (!root->left && !root->right)   
            return 0;
        
        int left = height(root->left);
        int right = height(root->right);
        
        return 1+max(left,right);
    }
