class Solution {
public:
    string intToRoman(int num) {
     vector<string> r={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string ans="";
        int  arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int i=0;
        while(num){
            while(arr[i]>num) i++;
            num=num-arr[i];
            ans+=s[i];
        }
        return ans;
        
    }
};