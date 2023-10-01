#include<bits/stdc++.h>

string prefixToInfixConversion(string &s){
	// Write your code here.


	stack<string>st;
	//reverse(s.begin(),s.end());

	for(int i=s.length()-1;i>=0;i--)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&&s[i]<='Z'))
		{
			string ans="";
			ans+=s[i];
			st.push(ans);
		}else{

			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();

			string res="";

			res='('+op1+s[i]+op2+')';
			st.push(res);
		}
	}

	return st.top();
}
