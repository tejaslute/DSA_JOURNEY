class Solution
{
    public:
    
    
    void rec(queue<int>&q)
    {
        if(q.empty())
        {
            return;
        }
        
        int x=q.front();
        q.pop();
        rec(q);
        q.push(x);
    }
    queue<int> rev(queue<int> q)
    {
        rec(q);
        return q;
    }
};




class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>s;
        while(!q.empty())
        {
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        
        return q;
    }
};
