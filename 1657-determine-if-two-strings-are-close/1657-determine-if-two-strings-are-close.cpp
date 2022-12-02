class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1==word2) return true;
        vector<int> arr1(26,0);
         vector<int> arr2(26,0);
        for(auto i:word1) arr1[i-'a']++;
         for(auto i:word2) arr2[i-'a']++ ;
        string temp1="",temp2="";
        for(int i=0;i<26;i++){
            if(arr1[i]==0 && arr2[i]!=0) return false;
            if(arr2[i]==0 && arr1[i]!=0) return false;
        }
        for(auto i:arr1){
            if(i!=0) temp1+=to_string(i);
        }
        for(auto i:arr2){
            if(i!=0) temp2+=to_string(i);
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        if(temp1==temp2) return true;
        return false;
    }
};