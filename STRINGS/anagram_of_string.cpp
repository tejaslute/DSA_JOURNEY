// S1 = bcadeh
// S2 = hea
// Output: 3
// Explanation: We need to remove b, c
// and d from S1.





unordered_map<char, int> map;
    
    for(int i=0; i<str1.size(); i++)
        map[str1[i]]++;
        
    for(int i=0; i<str2.size(); i++)
        map[str2[i]]--;
        
    int ans = 0;
    
    for(auto i : map){
        
        ans =ans+ abs(i.second);
    }
    
    
    return ans;
