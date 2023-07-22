/*

Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1


  */

void printTriangle(int n) {
        // code here
        
        for(int i=1;i<=n;i++)
        {
            // print fisrt triangle 
            
            for(int j=1;j<=i;j++)
            
            {
                cout<<j<<" ";
            }
            
            //space 
            
            for(int k=1;k<=2*n-2*i;k++)
            {
                cout<<"  ";
            }
            
            //triange
            
            for(int h=i;h>=1;h--)
            {
                cout<<h<<" ";
            }
            
            cout<<endl;
        }
    }
