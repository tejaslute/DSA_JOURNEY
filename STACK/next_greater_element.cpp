/*N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1*/

vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long>ans;
       stack<long long>s;
       for(int i=n-1;i>=0;i--){  // loop to traverse array from backside 
           if(s.size()==0){
               ans.push_back(-1);
           }
           else if(s.size()>0 && s.top()>arr[i]){ // push an elemt if s.top()>arr[i];
               ans.push_back(s.top());
           }
           else if(s.size()>0 && s.top()<arr[i]){  // do pop operation till top()>arr[i]
               while(s.size()>0 && s.top()<arr[i]){
                   s.pop();
               }
               if(s.size()==0){ // if no elemys remains then push -1 ;
               ans.push_back(-1);
           }
           else{
               ans.push_back(s.top());
           }
           }
           s.push(arr[i]);
       }
       reverse(ans.begin(),ans.end()); // reverse an ans 
       return ans;
