class Solution {
public:
	int lps(string s) {
		int j = 0;
		int i = 1;
		vector<int>lp(s.size(), 0);
		while (i < s.size())
		{
			if (s[i] == s[j])
			{
				lp[i] = j + 1;
				i++;
				j++;
			}
			else
			{
				if (j != 0)
				{
					j = lp[j - 1];
				}
				else
				{
					i++;
				}
			}
		}
		return lp.back();

	}
};