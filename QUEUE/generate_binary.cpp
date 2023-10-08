vector<string> generate(int N)
{
	vector<string> ans;
	queue<string> q;
	q.push("1");
	for(int i=1; i<=N; i++){
	    string bin = q.front();
	    ans.push_back(bin);
	    q.pop();
	    q.push(bin+"0");
	    q.push(bin+"1");
	    
	}
	return ans;
}
