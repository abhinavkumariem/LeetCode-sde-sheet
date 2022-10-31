class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> fer(26,0);
        for(int i=0;i<p.size();i++){
            fer[p[i]-'a']++;
        }
        vector<int> ans;
        int count=p.size();
        int start=0;
        int n=s.size();
        for(int j=0;j<n;j++){
            if(fer[s[j]-'a']>0){
                count--;
            }
            fer[s[j]-'a']--;
            if(count==0){
                while(start<=j && count==0){
                    fer[s[start]-'a']++;
                    if(fer[s[start]-'a']>0){
                    count++;
                  }
                    start++;
                }
                if((j-start+2)==p.size())
                ans.push_back(start-1);
            }
        }
        return ans;
    }
};