class Solution {
public:
    string convert(string s, int n) {
        vector<string>ch(n);
                if (n == 1 || n >= s.size()) return s;
        int up=0;int down=1;
        int r=0;//int c=0;
        int i=0;
        while(i<s.length()){
            if(down){
                ch[r]+=s[i];
                i++;r++;
                if(r==n){
                down=0;up=1;r=n-2;
                }
            }
            if(up && i< s.length()){
                ch[r]+=s[i];
                r--;i++;
                if(r<0){
                    down=1;up=0;r=1;
                }

            }
        }
         string ans;
        for (auto &row : ch) ans += row;
        return ans;
    }
};