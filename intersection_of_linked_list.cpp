struct node* findIntersection(struct node* head1, struct node* head2)
{
    // code here
    struct node* temp1=head1;
    struct node* temp2=head2;
    
    map <int, int> val;
    vector <int> ans;
    
    while (temp1!=NULL)
    {
        
        //const bool is_in = st.find(element) != st.end();
        map <int,int>::iterator it;
        it = val.find(temp1->data);
        
        if (it==val.end())
        {
            val.insert(pair<int,int>(temp1->data,1));
        }
        else
        {
            //cout<<"hello"<<endl;
            val[temp1->data]++;
            //cout<<val[temp1->data]<<endl;
        }
        
        temp1=temp1->next;
        
    }
    
    
    
    while (temp2!=NULL)
    {
        map <int,int>::iterator it;
        it = val.find(temp2->data);
        
        if (it!=val.end())  // it is in the map
        {
            if (val[temp2->data] != 0)
            {
                ans.push_back(temp2->data);
                val[temp2->data]--;
            }
        }
        
        temp2=temp2->next;
    }
    
    sort(ans.begin(), ans.end());
    
    struct node* head = NULL;
    
    for (int i=ans.size()-1; i>=0; i--)
    {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = ans[i];
        temp->next = head;
        head = temp;
    }
    
    return head;
}
