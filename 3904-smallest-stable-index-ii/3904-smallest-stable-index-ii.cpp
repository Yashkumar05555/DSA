class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>smax(nums.size());
        vector<int>smin(nums.size());
        smax[0]=nums[0];
        smin[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
                 if(smax[i-1]>nums[i]){
                    smax[i]=smax[i-1];
                 }else{
                    smax[i]=nums[i];
                 }
        }
        for(int i=nums.size()-2;i>=0;i--){
            smin[i]=min(smin[i+1],nums[i]);
        }

        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(smax[i]-smin[i]<=k ){
                ans=min(ans,i);
            }
        }
        if(ans== INT_MAX){return -1;}
        return ans;
    }
};