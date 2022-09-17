 unordered_map<int,int>mp;
       int result = -1;
       for(int i=0;i<n;i++){
           mp[a[i]]++;
           
           if(mp[a[i]] == k){
               result = a[i];
               break;
           }
       }
       return result;
