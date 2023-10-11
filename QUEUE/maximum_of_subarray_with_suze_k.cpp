vector<int> max_of_subarrays(int *arr, int n, int k)
{
deque<int> d;
for (int i{0}; i < k; i++)
{
while (d.size() > 0 && arr[i] > d.back())
d.pop_back();
d.push_back(arr[i]);
}

vector<int> ans{d.front()};
for (int i{k}; i < n; i++)
{
    if (arr[i - k] == d.front())
        d.pop_front();
    while (d.size() > 0 && arr[i] > d.back())
        d.pop_back();
    d.push_back(arr[i]);
    ans.push_back(d.front());
}
return ans;
