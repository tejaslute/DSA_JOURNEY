string postToInfix(string p) {
    // Write your code here.


    stack<string>s;

    for(int i=0;i<p.length();i++)
    {
        if((p[i]>='a' && p[i]<='z')||(p[i]>='A'&&p[i]<='Z'))
        {
            string temp="";
            temp+=p[i];
            s.push(temp);
        }
        else
        {
            string temp1="";
            string op2=s.top();
            s.pop();
            string op1=s.top();
            s.pop();

            temp1+='('+op1+p[i]+op2+')';
            s.push(temp1);
        }

    }

    return s.top();
}
