class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        // int j=1;int k=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j = i + 1;
int k = nums.size() - 1;
        //  s.clear();
            while(j<k){
   int sum=nums[i]+nums[j]+nums[k];
   if(sum==0){
    s.insert({nums[i],nums[j],nums[k]});
    j++;k--;
   }
  else if(sum<0){
    j++;
   }else{
    k--;
   }
            }

        }
                for(auto v : s){
    ans.push_back(v);
}
        return ans;
    }
};