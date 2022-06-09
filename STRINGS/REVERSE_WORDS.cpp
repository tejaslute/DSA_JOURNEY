//Reverse words in a given string
//Easy Accuracy : 50.0 % Submissions : 94029 Points : 2
//Lamp
//This problem is part of GFG SDE Sheet.Click here to view more.
//Given a String S, reverse the string without reversing its individual words.Words are separated by dots.
//
//Example 1 :
//
//	Input :
//	S = i.like.this.program.very.much
//	Output : much.very.program.this.like.i
//	Explanation : After reversing the whole
//	string(not individual words), the input
//	string becomes
//	much.very.program.this.like.i

string reverseWords(string S)
{
    // code here
    int j = 0, i = 0;
    reverse(S.begin(), S.end());
    for (; i < S.length(); i++) {
        if (S[i] != '.') {
            continue;
        }
        else {
            reverse(S.begin() + j, S.begin() + i);
            j = i + 1;
        }
    }

    reverse(S.begin() + j, S.begin() + i);

    return S;

}