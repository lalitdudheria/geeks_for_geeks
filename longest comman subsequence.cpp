//
//  main.cpp
//  longest common subsequnce
//
//  Created by Lalit Dudheria on 08/10/18.
//  Copyright © 2018 Lalit Dudheria. All rights reserved.
//



#include <iostream>
#include <string>

using namespace std;

int lcs(string s1, string s2);
int max(int a, int b);


int main() {
    
    cout<<"hello"<<endl;
    string s1, s2;
    cin>>s1>>s2;
    cout<<lcs(s1,s2);
    return 0;
}

int max(int a, int b)
{
    if (a>b)
        return a;
    return b;
}

int lcs(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    
    int matrix[n1+1][n2+1];
    
    
    // start the main work
    for (int i=0; i<=n1; i++)
    {
        for (int j=0; j<=n2; j++)
        {      
            if (i==0 || j==0)
                matrix[i][j] = 0;
            else if (s1[i] == s2[j])
                matrix[i][j] = matrix[i-1][j-1] + 1;
            else
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
        }
    }
    
    return matrix[n1][n2];
    
}
