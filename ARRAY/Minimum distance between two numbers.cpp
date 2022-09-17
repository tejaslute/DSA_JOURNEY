int minDist(int arr[], int n, int x, int y) {
        int curr_distance=0;
        int ans=INT_MAX;
        int indexofx=-1;
        int indexofy=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                indexofx=i;
            }
            if(arr[i]==y){
               indexofy=i;
            }
              if(indexofx!=-1&&indexofy!=-1){
                curr_distance=abs(indexofx-indexofy);
                 ans=min(ans,curr_distance);
               }
        }
        if(indexofx!=-1&&indexofy!=-1){
            return ans;
        }
        return -1;
       
    }
