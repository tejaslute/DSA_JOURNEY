Method : 1
    
    void printTriangle(int n) {
        for(int i=1;i<=n;i++ ){
            
            for(int j=0;j<i;j++){
                
                cout<<(i+j)%2<<" ";
            }
            cout<<endl;
        }
    
    


Method : 2
void printTriangle(int n) {
        
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                bool flag=false;
                for(int j=1;j<=i;j++)
                {
                    if(flag)
                    {
                        cout<<"1 ";
                        flag=false;
                    }
                    else
                    {
                        cout<<"0 ";
                        flag=true;
                    }
                }
            }
            else
            {
                bool flag=false;
                for(int j=1;j<=i;j++)
                {
                    if(flag)
                    {
                        cout<<"0 ";
                        flag=false;
                    }
                    else
                    {
                        cout<<"1 ";
                        flag=true;
                    }
                }
            }
            cout<<endl;
        }
    }
    
    
