class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() > 0 && (s.find(part) < s.length()))  // used (s.length > 0) cond.n for edge case, as s may be full of only part string like : 
            {s.erase(s.find(part), part.length());            // s= "abcabcabc"  part = "abc"
            }      
     return s;
    }
};