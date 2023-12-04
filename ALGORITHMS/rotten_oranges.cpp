class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        vector<vector<int>>visited=grid;
        int n=grid.size();
        int m=grid[0].size();
    queue<pair<pair<int,int>,int>>q;
    int t=0;
    int tm=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    visited[i][j]=2;
                }else{
                    visited[i][j]=0;
                }

            }
        }

        int rowN[]={-1,0,1,0};
        int colN[]={0,1,0,-1};

        while(!q.empty())
        {
            int r =q.front().first.first;
            int c=q.front().first.second;
            int t= q.front().second;
            q.pop();
            tm=max(tm,t);
            for(int i=0;i<4;i++)
            {
                int row=r+rowN[i];
                int col=c+colN[i];

                if((row >= 0 && row < n) && (col >= 0 && col < m) 
                && (visited[row][col] != 2 && grid[row][col]==1 )  )
                {
                    q.push({{row,col},(t+1)});
                    visited[row][col]=2;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j]!=2 &&  grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return tm;
    }
};
