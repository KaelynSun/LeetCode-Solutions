class Solution {
public:

    string encode(vector<string>& strs) {//write the word's length first and then put in a delimiter '#'
        string encoded;
        for(string &s : strs){
            encoded += to_string(s.size()) + '#' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int length = stoi(s.substr(i, j - i));
            j++;

            result.push_back(s.substr(j, length));
            i = j + length;
        }

        return result;
    }
};
