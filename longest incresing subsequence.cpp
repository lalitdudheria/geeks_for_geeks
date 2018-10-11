


#include <iostream>
#include <vector>

using namespace std;

int lis(vector<int> myvector);

int main()
{
    
    vector<int> myvector(7);
    for (int i=0; i<7; i++)
    {
        cin>>myvector[i];
    }
    
    cout<<lis(myvector);
    
    return 0;
}


int lis(vector<int> myvector)
{
    int n = myvector.size();
    
    vector<int> temp(n);
    
    for (int i=0; i<n; i++)
        temp[i] = 1;
    
    
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (myvector[j] < myvector[i])
                temp[i]+=1;
        }
    }
     
    return temp[n-1];
    
}
