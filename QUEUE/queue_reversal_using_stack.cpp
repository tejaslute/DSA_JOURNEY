queue<int> rev(queue<int> q)
{
   
    stack<int>s; // Stack create kela 
    while(!q.empty())
    {
        int ans=q.front();
        q.pop();
        s.push(ans); // remove one by one elemnt from queue and push to stck 
    }
    
    while(!s.empty())
    {
        int topp=s.top();
        s.pop();
        q.push(topp);  // remobe one ny one elemeny form stack and push it to queue.
    }
    return q;
}
