//Plus One
//Easy Accuracy : 50.09 % Submissions : 40427 Points : 2
//Given a non - negative number represented as a list of digits, add 1 to the number(increment the number represented by the digits).The digits are stored such that the most significant digit is first element of array.
//
//
//Example 1 :
//
//	Input :
//	N = 3
//	arr[] = { 1, 2, 4 }
//Output:
//1 2 5
//Explanation :
//	124 + 1 = 125, and so the Output
//	Example 2 :

class Solution{
 public:
   vector<int> increment(vector<int> arr ,int N) {
       // code here
       for (int i = N - 1; i >= 0; i--)
       {
           if (arr[i] < 9)
           {
               arr[i] = arr[i] + 1;
               return arr;
           }
           else if (arr[i] == 9)
           {
               arr[i] = 0;
           }
       }
       if (arr[0] == 0)
       {
           arr.push_back(1);
           reverse(arr.begin(),arr.end());
       }

       return arr;
   }
};