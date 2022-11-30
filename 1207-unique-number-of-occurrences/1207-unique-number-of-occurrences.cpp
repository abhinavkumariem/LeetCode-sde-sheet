class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> fer;
        for(auto i:arr) fer[i]++;
        set<int> s;
        for(auto i: fer){
            if(s.find(i.second)==s.end()) s.insert(i.second);
            else return false;
        }
        return true;
    }
};