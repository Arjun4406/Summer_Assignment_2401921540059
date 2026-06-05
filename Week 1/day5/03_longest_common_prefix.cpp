class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {  
      string  st =strs[0];
      string result = "";
      int i=0;
      while (i<st.size()){
        for(int j=1;j<strs.size();j++){
             const string& another = strs[j];
            if(i>=another.size() || another[i]!=st[i]){
                return result;
                
            }
            
        } 
        result=result+st[i];
        i++;
      }
      return result;

    } 
};