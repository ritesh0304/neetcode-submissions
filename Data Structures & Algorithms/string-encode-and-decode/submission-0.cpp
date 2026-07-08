class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for (string &str : strs) {
            ans += str;
            ans += "é";
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        string delim = "é";
        size_t pos;

        while ((pos = s.find(delim)) != string::npos) {
            ans.push_back(s.substr(0, pos));
            s.erase(0, pos + delim.size());
        }

        return ans;
    }
};