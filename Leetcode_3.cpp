
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int left = 0;
        set<char>st;
        for(int right = 0 ; right < s.size(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);

            longest = max(longest, right-left+1);
        }

        return longest;

        
    }
};