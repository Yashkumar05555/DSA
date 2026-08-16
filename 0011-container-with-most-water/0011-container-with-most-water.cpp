class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;int i=0;int j=h.size()-1;
        while(i<j){
            int local=(j-i)*(min(h[i],h[j]));

            if(local>ans){
                ans=local;
            }
            if(h[i]>h[j]){
                j--;
            }else{
                i++;
            }
        }return ans;
    }
};