class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char c){
        if (c == '^')
            return 3;
        else if (c == '/' || c == '*')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return -1;
    }
    string infixToPostfix(string s) {
        string postfix = "";
        stack<char> st;
        int n = s.length();
        for(int i=0; i<n; i++){
            char ch = s[i];
            //ch is an operand -> add it to postfix
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
                postfix += s[i];
            }
            else {
                //ch is '(' -> push it into stack
                if(ch=='(') st.push(ch);
                
                //ch is ')' -> pop from stack and add to postfix untill we found '('
                else if(ch==')'){
                    while(!st.empty() && st.top()!='('){
                        postfix += st.top();
                        st.pop();
                    }
                    st.pop(); // remove '('
                }
                //ch is operator
                else {
                    //if stack is not empty and precedence of topmost operator 
                    //present in stack is greater than ch than pop it and add it to postfix
                    while(!st.empty() && precedence(st.top()) >= precedence(ch)){
                        postfix += st.top();
                        st.pop();
                    }
                    //push ch into stack if higher precedence
                    st.push(ch);
                }
            }
        }
        //add every operator into postfix which is left in stack
        while(!st.empty()){
            postfix += st.top();
            st.pop();
        }
        
        return postfix;
    }
};
