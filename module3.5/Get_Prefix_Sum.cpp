#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        b[i]=a[i]+b[i-1];
    }

    for (int i = n; i > 0; i--)
    {
        cout<<b[i]<<" ";
    }
    
   
    
    
    return 0;
}