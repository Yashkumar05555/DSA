class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int mn = INT_MAX;
        int mx = INT_MIN;

        // Find minimum and maximum value
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mn) {
                mn = nums[i];
            }

            if (nums[i] > mx) {
                mx = nums[i];
            }
        }

        // ---------------- FRONT ----------------
        int cf = 0;
        bool ma = true;
        bool mi = true;
        int i = 0;

        while (ma || mi) {

            if (nums[i] == mn) {
                mi = false;
            }

            if (nums[i] == mx) {
                ma = false;
            }

            i++;
            cf++;
        }


        // ---------------- BACK ----------------
        int cb = 0;
        ma = true;
        mi = true;
        i = nums.size() - 1;

        while (ma || mi) {

            if (nums[i] == mn) {
                mi = false;
            }

            if (nums[i] == mx) {
                ma = false;
            }

            i--;
            cb++;
        }


        // ---------------- ONE FRONT + ONE BACK ----------------
        int minIndex = 0;
        int maxIndex = 0;

        for (int k = 0; k < nums.size(); k++) {

            if (nums[k] == mn) {
                minIndex = k;
            }

            if (nums[k] == mx) {
                maxIndex = k;
            }
        }

        int cbb;

        if (minIndex < maxIndex) {
            cbb = (minIndex + 1) + (nums.size() - maxIndex);
        }
        else {
            cbb = (maxIndex + 1) + (nums.size() - minIndex);
        }


        return min({cf, cb, cbb});
    }
};