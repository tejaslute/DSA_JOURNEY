#include<math.h>
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	int sum=0;
    	int count=0;
    	for(int i=str.size()-1;i>=0;i--)
    	{
    	    if(str[i]>='0' && str[i]<='9')
    	    {
    	        sum=sum+(str[i]-48)*pow(10,count);
    	        count++;
    	    }
    	    else
    	    {
    	        count=0;
    	    }
    	}
    	return sum;
    	
    }
};
