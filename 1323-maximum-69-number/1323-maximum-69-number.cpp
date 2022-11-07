class Solution {
public:
    int maximum69Number (int num) {
      string st = to_string(num);
        for(int i=0;i<st.size();i++){
            if(st[i]-'0'==6){
                st[i]='9';
                break;
            }
        }
        return stoi(st);  
    }
};