class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2,vector<int>());
        unordered_map<int,int> loser;
        for(auto i: matches){
            if(loser.find(i[0])==loser.end()) loser[i[0]]=0;
            loser[i[1]]++;
        }
        for (auto i: loser){
            if(i.second==0){
                ans[0].push_back(i.first);
            }
            if(i.second==1) ans[1].push_back(i.first);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};