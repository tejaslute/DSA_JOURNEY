class Solution {
public:
    int solve(int n){
        int x=0;
        while(n>0){
            int c=n%10;
            x=x+c*c;
            n=n/10;
        }
        return x;
    }
    bool isHappy(int n) {
        unordered_set<int> sett;
        while(n!=1 && !sett.count(n)){
            sett.insert(n);
            n=solve(n);
            cout<<n<<" ";
        }
        if(n==1)return true;
        return false;
    }
};

// Method 2 

class Solution {
private:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
public:
    bool isHappy(int n) {
        int slowPointer = n;
        int fastPointer = nextNumber(n);
        while(fastPointer != 1 && fastPointer != slowPointer){
            slowPointer = nextNumber(slowPointer);
            fastPointer = nextNumber(nextNumber(fastPointer));
        }
        return fastPointer==1;
    }
};
