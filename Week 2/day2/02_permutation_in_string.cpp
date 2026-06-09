class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);

    
        for (char ch : s1) {
            s1Freq[ch - 'a']++;
        }

        int windowSize = s1.length();

        
        for (int i = 0; i < windowSize; i++) {
            windowFreq[s2[i] - 'a']++;
        }

        if (s1Freq == windowFreq) {
            return true;
        }

        for (int right = windowSize; right < s2.length(); right++) {

            char newChar = s2[right];
            char oldChar = s2[right - windowSize];

            windowFreq[newChar - 'a']++;
            windowFreq[oldChar - 'a']--;

            if (s1Freq == windowFreq) {
                return true;
            }
        }

        return false;
    }
};