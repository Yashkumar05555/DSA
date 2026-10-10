class Solution {
public:
    int fun(vector<int>&clim,int in,vector<int>&dp){
    if(in>=clim.size()){return 0;}      
    if(dp[in]!=-1){return dp[in];}
    return dp[in]= clim[in]+min(fun(clim,in+1,dp),fun(clim,in+2,dp));

}
    int minCostClimbingStairs(vector<int>& clim) {
        vector<int>dp(clim.size(),-1);
     return min(fun(clim,0,dp),fun(clim,1,dp));
    }
};