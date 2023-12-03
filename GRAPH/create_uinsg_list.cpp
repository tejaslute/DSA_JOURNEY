#include <iostream>
#include <vector>
#include <bits/stdc++.h>  // This includes all necessary headers

using namespace std;

int main()
{
    cout << "Enter no of nodes : ";
    int n;
    cin >> n;

    vector<int> arr[n + 1];

    cout << "Enter number of edges : ";
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "Enter connections ";
        int u, v;
        cin >> u >> v;

        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)  // Corrected loop limit
    {
        cout << i << " -> ";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
