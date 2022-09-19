
void v(queue<int>&q)
{
    if(q.empty())
    {
        return ;
    }
    int ans=q.front();
    q.pop();
    v(q);
    q.push(ans);
}
queue<int> rev(queue<int> q)
{
    v(q);
    return q;
}
