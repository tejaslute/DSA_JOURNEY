
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
   bool areRotations(string s1,string s2)
   {
       if(s1.size() != s2.size()) {
           return false;
       }
       string r = s1 + s1;
       if(r.find(s2) != -1) {
           return true;
       }
       return false;
   }
};
