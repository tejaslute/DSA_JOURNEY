 
  /*
  
  Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
  */
  
    void printTriangle(int n) {
        // code here
        
        for(int i=1;i<=n;i++)
        {
            // for start
            
            for(int j=n;j>=i;j--)
            {
                cout<<"*";
            }
            
            // space 
            
            for(int k=1;k<i;k++)
            {
                cout<<"  ";
            }
            
            // for right start
            
            
            for(int k=n;k>=i;k--)
            {
                cout<<"*";
            }
            
            cout<<endl;
        }
        
        for(int i=1;i<=n;i++)
        {
            // for start
            
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            
            // space 
            
            for(int k=n;k>i;k--)
            {
                cout<<"  ";
            }
            
            // for right start
            
            
            for(int k=1;k<=i;k++)
            {
                cout<<"*";
            }
            
            cout<<endl;
        }
    }
