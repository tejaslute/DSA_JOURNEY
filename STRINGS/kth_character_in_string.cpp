// Input: m = 5, n = 2, k = 5
// output: 0
// Explanation: Binary representation of m 
// is "101", after one iteration binary 
// representation will be "100110", and after 
// second iteration binary representation 
// will be "100101101001".





char kthCharacter(int m, int n, int k)
    {
        string binary = "", result = "";
        
        if(m == 0)
            binary = "0";
        
        while(m) {
            binary += (m%2 + 48);
            m /= 2;
        }
        reverse(binary.begin(), binary.end());
        
        while(n--) {
            result = "";
            for(char c: binary) {
                if(c == '0')
                    result += "01";
                else
                    result += "10";
            }
            binary = result;
        }
       return binary[k-1];
    }
