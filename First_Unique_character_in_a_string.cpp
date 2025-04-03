class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> carr(26,0);
        for (int i = 0; i < s.length(); i++){
            carr[s[i] - 'a']++;
        }
        int unique;
        for (int i = 0; i < s.length(); i++){
            if (carr[s[i] - 'a'] == 1){
                unique = i;
                break;
            }
            else unique = -1;
        }
        return unique;
    }
};
