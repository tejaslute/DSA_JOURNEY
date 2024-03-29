class Solution {
public:
    bool isValid(string s1) {



        stack<char> s;
        for (int i = 0; i < s1.length(); i++) {

            char ch = s1[i];

            //if opening bracket, stack push
            //if close bracket, stacktop check and pop

            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            else
            {
                //for closing bracket
                if (!s.empty()) {
                    char top = s.top();
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        s.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        if (s.empty())
            return true;
        else
            return false;
    }







};
