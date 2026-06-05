class Solution {
public:
    string decodeString(string s) {

        stack<int> countStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for(char ch : s) {

            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if(ch == '[') {
                countStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }

            else if(ch == ']') {

                int repeat = countStack.top();
                countStack.pop();

                string temp = curr;

                for(int i = 1; i < repeat; i++) {
                    curr += temp;
                }

                curr = strStack.top() + curr;
                strStack.pop();
            }

            else {
                curr += ch;
            }
        }

        return curr;
    }
};
