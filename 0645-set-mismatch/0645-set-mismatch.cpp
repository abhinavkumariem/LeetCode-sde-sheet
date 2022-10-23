class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> ans;
        unordered_map<int,int> mp;
    for(auto i: nums){
        if(mp.find(i)!=mp.end()) ans.push_back(i);
        mp[i]=1;
    }
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()) ans.push_back(i);
        }
        return  ans;
    }
};