class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum=0;int pro=1;
        int check=n;
        while(check>0){
            int i=check%10;
            sum+=i;
            pro*=i;
            check/=10;
        }
        if(n%(sum+pro)==0){
            return true;
        }
        return false;
    }
};