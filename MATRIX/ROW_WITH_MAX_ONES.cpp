int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    // code here
    int ans1 = 0, r = -1;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                ans++;
            }
        }
        if (ans == 0) {
            continue;
        }
        if (ans > ans1) {
            ans1 = ans;
            r = i;
        }
    }
    //if()
    return r;
}

};
