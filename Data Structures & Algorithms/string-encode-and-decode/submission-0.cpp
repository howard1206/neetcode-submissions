class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string str : strs) {
            int length = str.size();
            encoded_string += to_string(length) + "#" + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        int i = 0;
        int n = s.size();
        vector<string> result;
        while(i < n) {
            size_t j = s.find('#', i);
            if(j == string::npos) break;

            int len = stoi(s.substr(i, j - i));

            string str = s.substr(j + 1, len);
            result.push_back(str);

            i = j + len + 1;
        }
        return result;
        
    }
};
