class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pt={1};
        for(int i=1;i<=rowIndex;i++){
            vector<int> temp(i+1,0);
            temp[0]=1;
            temp[i]=1;
            for(int j=1;j<pt.size();j++){
                temp[j]=pt[j]+pt[j-1];
            }
            pt=temp;
        }
        return pt;
    }
};