/*
The aim is to store the data of every node in the map with its horizontal distance. if the horizontal distance is already
present then toh vo waala node ka data nahi daalna. 

map apne ap keys sort ker deta hai so last main bas print kerna hai. 

*/
void topView(Node * root) {
        
        if (root == NULL)
            return;
        
        map<int, int> mymap;
        queue <pair<Node*,int>> q;
        
        q.push(make_pair(root,0));
        
        while (!q.empty())
        {
            pair<Node*, int> p = q.front();
            
            Node* n = p.first;
            int val = p.second;
            q.pop();
            // if val is not present in the map
            if (mymap.find(val) == mymap.end())
            {
                mymap[val] = n->data;
            }
            
            if (n->left !=NULL)
                q.push(make_pair(n->left, val-1));
            
            if (n->right !=NULL)
                q.push(make_pair(n->right, val+1));
        }
        
        // print the values from the map
        
        map<int, int>::iterator it;
        
        for (it=mymap.begin(); it!=mymap.end(); it++)
        {
            cout<<it->second<<" ";
        }
        
    }
