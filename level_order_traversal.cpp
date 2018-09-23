/* 
1. This problem will be solved using queue. 
2. Push the root to the queue. 
3. print root's data. 
4. push the left child and the right child
5. continue the process till the queue is empty. 
*/
    
    
    
    void levelOrder(Node * root) {
            
        if (root == NULL)
            return;
        
        queue <Node *> myqueue;
        myqueue.push(root);
        
        while (!myqueue.empty())
        {
            cout<<myqueue.front()->data<<" ";
            if (myqueue.front()->left != NULL)
                myqueue.push(myqueue.front()->left);
            if (myqueue.front()->right !=NULL)
                myqueue.push(myqueue.front()->right);
            
            myqueue.pop();
        }

    }
