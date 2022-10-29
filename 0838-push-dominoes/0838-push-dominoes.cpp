class Solution {
public:
    string pushDominoes(string dominoes) {
        string ans="";
        for(int i=0;i<dominoes.size();i++){
            if(dominoes[i]=='L'||dominoes[i]=='R') ans+=dominoes[i];
            else{
            int j=i-1,k=i+1;
            while(j>=0 && k<dominoes.size()){
                if(dominoes[k]=='L'&& dominoes[j]=='R') {ans+='.';break;} 
                 else if(dominoes[k]=='L'){ ans+='L';break;}
                else if(dominoes[j]=='R') {ans+='R';break;}
                 else if(dominoes[k]=='R'){ k=dominoes.size();break;}
                else if(dominoes[j]=='L') {j=-1;break;}
                else {j--;k++;}
            }   
                if(j<0 && k==dominoes.size()) ans+=".";
               else if(j<0){
                  while(k<dominoes.size()){
                      if(dominoes[k]=='L') {ans+='L';break;}
                      else if(dominoes[k]=='R') {ans+='.' ;break;}
                      else k++;
                  }
                   if(k==dominoes.size())ans+=".";
              }
                 else if(k==dominoes.size() ){
                  while(j>=0){
                      if(dominoes[j]=='R') {ans+='R';break;}
                      else if(dominoes[j]=='L') {ans+='.'; break;}
                      else j--;
                  }
                   if(j<0)  ans+="." ;  
                 }
            
              }  
            
        }
    
        return ans;
    }
};