class Solution {
public:
    string ReFormatString(string s, int K) {
        string a = "";
        int count = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != '-') {
                a.push_back(toupper(s[i]));
                count++;
                
                if (count == K) {
                    a.push_back('-');
                    count = 0;
                }
            }
        }
        
        if (!a.empty() && a.back() == '-') {
            a.pop_back();
        }
        
        reverse(a.begin(), a.end());
        
        return a;
    }
};
