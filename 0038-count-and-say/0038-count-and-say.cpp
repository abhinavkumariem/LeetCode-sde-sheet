class Solution {
public:
    //unordered_map<int,int> mp;
    string countAndSay(int n) {
        string a="1";
            for(int i=1;i<n;i++){
                a=helper(a);
            }
        return a;
    }
    string helper(string a){
        string st="";
        int n=a.size();
        int count=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                count++;
            }
           else{
               st=st+to_string(count)+a[i];
               count=1;
           }
        }
        st=st+to_string(count)+a[n-1];
        return st;
    }
};