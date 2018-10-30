#include <string>
#include <stack>
#include <map>

class ValidParentheses {
public:
	bool isValid(std::string s) {
		std::map<char, char> ParenthPair = { 
			{'}', '{'},
			{']', '['},
			{')', '('}
		};
		std::stack<char> open;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
				open.push(s[i]);
			}
			else {
				if (open.empty()) {
					return false;
				}
				else {
					if (open.top() != ParenthPair[s[i]]) {
						return false;
					}
					else {
						open.pop();
					}
				}
			}
		}

		if (!open.empty()) return false;
		return true;
	}
};