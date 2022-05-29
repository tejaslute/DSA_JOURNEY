int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int b = k - a;
        if (mp.count(b)) {
            count += mp[b];
        }
        mp[a]++;
    }
    return count;
}