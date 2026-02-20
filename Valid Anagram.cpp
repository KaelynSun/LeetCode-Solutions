class Solution {
public:
    bool isAnagram(string s, string t) {
        int anagram_s[26] = {0};
        int anagram_t[26] = {0};

        if(s.size() != t.size()) return false;

        for(int j = 0; j < s.size(); j++){
            int alphabetNum_s = s[j] - 'a';
            int alphabetNum_t = t[j] - 'a';

            anagram_s[alphabetNum_s]++;
            anagram_t[alphabetNum_t]++;
        }

        for(int i = 0; i < 26; i++){
            if(anagram_s[i] != anagram_t[i]){
                return false;
                break;
            }
        }
        return true;
    }
};
