string longest(string names[], int n)
    {
        int size1=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(names[i].size()>size1)
            {
                size1=names[i].size();
                count=i;
            }
        }
        return names[count];
    }
