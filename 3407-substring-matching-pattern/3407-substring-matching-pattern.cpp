class Solution {
public:
    bool hasMatch(string s, string p) {
        
        int pos = p.find('*');

        string preStr = p.substr(0, pos);
        string postStr = p.substr(pos + 1);

        // Find prefix in s
        int prePos = s.find(preStr);

        if (prePos == string::npos) {
            return false;
        }

        // Start searching for suffix after prefix
        int start = prePos + preStr.length();

        int postPos = s.find(postStr, start);

        if (postPos == string::npos) {
            return false;
        }

        return true;
    }
};