class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]={i};
            }
            else{
                mp[nums[i]].push_back(i);
                vector<int> temp=mp[nums[i]];
               // if(temp[1]-temp[0]==3) return true;
                for(int i=0;i<temp.size();i++){
                    for(int j=i+1;j<temp.size();j++){
                        if(abs(temp[j]-temp[i])<=k) return true;
                       // else if(j-i>k) break;
                    }
                }
            }
        }
        return false;
    }
};