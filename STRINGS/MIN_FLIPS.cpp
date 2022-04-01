class Solution {
public:
    int minFlips(string s) {



        int flips = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '0')
                {
                    flips++;
                }
            }
            if (i % 2 != 0)
            {
                if (s[i] == '1')
                {
                    flips++;
                }
            }
        }
        return min(flips, s.length() - flips);

    }
};