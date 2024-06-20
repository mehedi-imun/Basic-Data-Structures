#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Given two arrays A and Bof size N

    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    vector<int> ans = B;
    ans.insert(ans.end(), A.begin(), A.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}