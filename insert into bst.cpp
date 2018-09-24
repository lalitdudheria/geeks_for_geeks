/*
1. Since we have to return the root node so in the end there is return root.
2. If itis an empty tree, check that condition. 
3. Else check where will the data go. Thats it. 
*/ 
 
 
 
 
 Node * insert(Node * root, int data) {
        
        if (root == NULL)
        {
            Node * temp = (Node *)malloc(sizeof(Node));
            temp->data = data;
            temp->right = NULL;
            temp->left = NULL;
            root = temp;
            return root;
        }
        
        if (data < root->data)
        {
            if (root->left == NULL)
            {
                Node * temp = (Node *)malloc(sizeof(Node));
                temp->data = data;
                temp->right = NULL;
                temp->left = NULL;
                root->left = temp;
                return root;
            }
            insert(root->left, data);
        }
        
        else
        {
            if (root->right == NULL)
            {
                Node * temp = (Node *)malloc(sizeof(Node));
                temp->data = data;
                temp->right = NULL;
                temp->left = NULL;
                root->right = temp;
                return root;
            }
            
            insert(root->right, data);
        }
        
        

        return root;
    }
