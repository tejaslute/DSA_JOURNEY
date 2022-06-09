/*Anagram
Easy Accuracy : 50.99 % Submissions : 82304 Points : 2
Lamp
This problem is part of GFG SDE Sheet.Click here to view more.
Given two stringsaandbconsisting of lowercase characters.The task is to check whether two given strings are an anagram of each other or not.An anagram of a string is another string that contains the same characters, only the order of characters can be different.For example, actand tac are an anagram of each other.

Example 1 :

    Input : a = geeksforgeeks, b = forgeeksgeeks
    Output : YES
    Explanation : Both the string have samecharacters with
    same frequency.So, both are anagrams.
    */

bool isAnagram(string a, string b) {

    // Your code here
    if (a.length() != b.length())
    {
        return false;
    }
    else {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            return true;
        }
        else {
            return false;
        }
    }
}