//s = "aaaaaabbbccccaaaaddf"
//Output
//"abcadf"
string solve(string s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || s[i] != s[i - 1]) ans += s[i];
    }
    return ans;
}
