//iterative
int s=0;
int e=n-1;

while(s<=n)
{
	mid=(s+e)/2;
	
	if(a[mid]==target)
{
		return mid;
}

	else if(a[mid]>target)
	{
		end=mid-1;
	}
else
{
	start=mid+1;
}
}

// recursive

int recu(int a[],int s,int e,int target)
	{
		if(s>e)
			{
	return -1; // no element found 
}
mid=(s+e)/2;
if(a[mid]==target)
	{
		return mid;
}
else if(a[mid]>target)
{
	return rec
(a,s,mid-1,target);
}
else
{
	return rec(a,mid+1,e,target);4
}
}
