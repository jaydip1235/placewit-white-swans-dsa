class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26,0);

        for(int i=0;i<chars.size();i++){
            count[chars[i]-'a']++;
        }
        int ans=0;

        for(int i=0;i<words.size();i++){
            vector<int>arr(26,0);
            for(int j=0;j<words[i].size();j++){
                arr[words[i][j]-'a']++;
            }
            int flag=1;
            for(int j=0;j<26;j++){
                if(arr[j]>count[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1)ans+=words[i].size();

        }
        return ans;
    }
};