class Solution {
public:
    int smallestNumber(int n, int t) {
        if(t>n){return t;}
        int pro=1; int d=n;int a=n; 
        while(true){
         if(a>0){
            
            pro=pro*(a%10);
            a=a/10;
         }
         if(a<=0){
            if(pro%t==0){
                return d;
            }else{
                d=n++;
                a=d;
                pro=1;
            }
         }
        }
    }
};