class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
 int a=k;
         while(true){
             if(find(nums.begin(), nums.end(), a)==nums.end()){
                return a;
             }
             a=a+k;
         }
    }
};