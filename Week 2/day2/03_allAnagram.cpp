class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;

        if (p.length() > s.length()) {
            return result;
        }

        vector<int> patternFreq(26, 0);
        vector<int> windowFreq(26, 0);

        for (char ch : p) {
            patternFreq[ch - 'a']++;
        }

        int windowSize = p.length();
        for (int i = 0; i < windowSize; i++) {
            windowFreq[s[i] - 'a']++;
        }
        if (windowFreq == patternFreq) {
            result.push_back(0);
        }
        for (int right = windowSize; right < s.length(); right++) {

            char incomingChar = s[right];
            char outgoingChar = s[right - windowSize];

            windowFreq[incomingChar - 'a']++;
            windowFreq[outgoingChar - 'a']--;

            if (windowFreq == patternFreq) {
                result.push_back(right - windowSize + 1);
            }
        }

        return result;
    }
};