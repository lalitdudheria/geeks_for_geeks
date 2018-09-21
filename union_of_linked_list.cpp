struct node* makeUnion(struct node* head1, struct node* head2)
{
    // code here
    
    struct node* temp1 = head1;
    struct node* temp2 = head2;
    
    set <int> myset;
    
    while (temp1!=NULL)
    {
        myset.insert(temp1->data);
        temp1 = temp1->next;
    }
    
    while (temp2!=NULL)
    {
        myset.insert(temp2->data);
        temp2 = temp2->next;
    }
    
    vector <int> myvector;
    
    set<int>::iterator it;
    
    for (it=myset.begin(); it!=myset.end(); it++)
    {
        myvector.push_back(*it);
    }
    
    sort(myvector.begin(), myvector.end());
    
    struct node* head = NULL;
    
    for (int i=myvector.size()-1; i>=0; i--)
    {
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data = myvector[i];
        temp->next = head;
        head = temp;
        
    }
    
    return head;
    
    
}
