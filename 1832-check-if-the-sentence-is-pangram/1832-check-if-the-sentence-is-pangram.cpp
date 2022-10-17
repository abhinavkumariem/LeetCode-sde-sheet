class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        int count_alpabet=0;
        vector<int> arr(26,0);
        for(int i=0;i<sentence.size();i++){
            if(arr[sentence[i]-'a']==0){
                arr[sentence[i]-'a']=1;
                count_alpabet++;
            }
            if(count_alpabet==26) return true;
        }
        return false;
    }
};