class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                counts.push(num);
                strings.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int k = counts.top();
                counts.pop();

                string temp = curr;
                curr = strings.top();
                strings.pop();

                while (k--) {
                    curr += temp;
                }
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};