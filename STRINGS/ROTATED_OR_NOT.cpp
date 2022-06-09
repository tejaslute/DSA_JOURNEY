//Check if string is rotated by two places
//Easy Accuracy : 41.08 % Submissions : 66027 Points : 2
//Lamp
//This problem is part of GFG SDE Sheet.Click here to view more.
//Given two strings a and b.The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.
//
//Example 1 :
//
//	Input :
//	a = amazon
//	b = azonam
//	Output : 1
//	Explanation : amazon can be rotated anti
//	clockwise by two places, which will make
//	it as azonam.
bool isRotated(string str1, string str2)
{
    {
        string s1 = "", s2 = "";
        int n = str1.size();

        s1 = str1.substr(2) + str1.substr(0, 2);
        s2 = str1.substr(n - 2) + str1.substr(0, n - 2);

        if (s1 == str2 || s2 == str2)
            return true;

        return false;
    }
}
