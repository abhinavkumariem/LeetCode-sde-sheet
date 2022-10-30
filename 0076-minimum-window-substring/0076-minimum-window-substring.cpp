class Solution {
public:
    string minWindow(string s, string t) {
      int start=0,end=0;
        vector<int> ferq(256,0);
        for(auto i: t){
          ferq[i]++;
        }
        int count=t.size();
        string ans="";
        int len=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(ferq[s[i]]>0){
                count--;
                ferq[s[i]]--;
            }
            else ferq[s[i]]--;
            if(count==0){
                while(count==0 && start<=i){
                 /*   if((i-start)<len) {
                   len=i-start+1;
                   ans=s.substr(start,len);
               }*/
                    if(ferq[s[start]]==0){
                        count++;
                        ferq[s[start]]++;
                    }
                    else ferq[s[start]]++;
                   start++; 
                }
                    if((i-start)+1<len) {
                   len=i-start+2;
                   ans=s.substr(start-1,len);
               }
            }
            
        }
        return ans;
    }
};