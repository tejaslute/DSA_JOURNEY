//Check if strings are rotations of each other or not
//Basic Accuracy : 49.96 % Submissions : 40531 Points : 1
//Given two strings s1 and s2.The task is to check if s2 is a rotated version of the string s1.The characters in the strings are in lowercase.
//
//
//
//Example 1 :
//
//    Input :
//    geeksforgeeks
//    forgeeksgeeks
//    Output :
//1
//Explanation : s1 is geeksforgeeks, s2 is
//forgeeksgeeks.Clearly, s2 is a rotated
//version of s1 as s2 can be obtained by
//left - rotating s1 by 5 units.

bool areRotations(string s1, string s2)
{
    if (s1.size() != s2.size()) {
        return false;
    }
    string r = s1 + s1;
    if (r.find(s2) != -1) {
        return true;
    }
    return false;
}