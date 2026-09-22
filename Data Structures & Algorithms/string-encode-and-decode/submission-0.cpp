class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // length find karo
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            // '#' ke baad actual string
            j++;

            result.push_back(s.substr(j, len));

            // next encoded string
            i = j + len;
        }

        return result;
    }
};