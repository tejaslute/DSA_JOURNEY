//Parenthesis Checker
//Easy Accuracy : 49.12 % Submissions : 100k + Points : 2
//This problem is part of GFG SDE Sheet.Click here to view more.
//Given an expression string x.Examine whether the pairs and the orders of “{ “,” }”, ”(“, ”)”, ”[“, ”]” are correct in exp.
//For example, the function should return 'true' for exp = “[()]{} { [()()] ()}” and 'false' for exp = “[(])”.
//
//Example 1:
//
//Input:
//{([])}
//Output:
//true
//Explanation :
//{ ([]) }. Same colored brackets can form
//balaced pairs, with 0 number of
//unbalanced bracket.

bool ispar(string x)
{
    /* int start=x[0];
     int end=x.length();

     if(x.size()==1)
     {
         return false;
     }
     while(start<end)
     {
         if(x[start]!=x[end])
         {
             return false;
         }
         start++;
         end--;
     }
     return true;*/

    stack<char>st;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '[' || x[i] == '(' || x[i] == '{')
        {
            st.push(x[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;;
            }
            else if (x[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (x[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (x[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }


}
