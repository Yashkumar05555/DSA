// class Solution {
// public:
//     int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
//         int ans=0;
        
//         for (int i=1;i<n+1;i++){
//             int k=0;
//             unordered_map<int,int>m;
//             while(k<r.size()){
//                 if(r[k][0]==i){
//                    m[r[k][1]]++;
//                 }
//                 k++;
//             }
//             // int j=1;
//             // while(j<9){
//             //     if(m.find(j)==m.end()){
//             //         c++;
//             //         j++;
//             //     }else{
//             //         if(j==1 || j==2|| j==3|| j==4){j=3;}
//             //         if(j==3 || j==4|| j==5|| j==6){j=5;}
//             //         if(j==5 || j==6|| j==7|| j==8){j=9;}
//             //         c=0;
//             //     }
//             //     if(c==4){
//             //       ans++;c=0;
//             //     }
//             // }
                
//                 bool left=m.find(2)==m.end()&&m.find(3)==m.end()&&m.find(4)==m.end()&&m.find(5)==m.end();
//                 bool mideel=m.find(4)==m.end()&&m.find(5)==m.end()&&m.find(6)==m.end()&&m.find(7)==m.end();
//                 bool right=m.find(6)==m.end()&&m.find(7)==m.end()&&m.find(8)==m.end()&&m.find(9)==m.end();

//                     if (left && right) {
//                         ans += 2;
//                                   }
//                 else if (left || mideel || right) {
//                            ans += 1;
//                     }
                   

//         }
//         return ans;
//     }
// };


class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
        int ans = 0;

        // Row-wise reserved seats
        unordered_map<int, unordered_map<int, int>> all;

        for (int k = 0; k < r.size(); k++) {
            all[r[k][0]][r[k][1]]++;
        }

        // Jinki koi seat reserved nahi hai
        // unme 2 groups aa sakte hain
        ans = 2 * (n - all.size());

        // Sirf reserved rows check karo
        for (auto &row : all) {

            unordered_map<int, int> &m = row.second;

            bool left = (m.find(2) == m.end() &&
                         m.find(3) == m.end() &&
                         m.find(4) == m.end() &&
                         m.find(5) == m.end());

            bool middle = (m.find(4) == m.end() &&
                           m.find(5) == m.end() &&
                           m.find(6) == m.end() &&
                           m.find(7) == m.end());

            bool right = (m.find(6) == m.end() &&
                          m.find(7) == m.end() &&
                          m.find(8) == m.end() &&
                          m.find(9) == m.end());

            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans++;
            }
        }

        return ans;
    }
};