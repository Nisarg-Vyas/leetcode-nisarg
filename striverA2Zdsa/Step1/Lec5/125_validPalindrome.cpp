#include <iostream>
#include <string>  
#include <cctype>  
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        char c;

        // learnt the isalnum and the way to write line 15
        for (int i = 0; i < s.size(); ++i) {
            c = s[i];
            if (isalnum(c)) clean += tolower(c);
        }

        int left = 0, right = clean.size() - 1;
        while (left < right) { 
            if (clean[left] != clean[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);  

    Solution sol;
    bool result = sol.isPalindrome(s);

    if (result)
        cout << "It is a palindrome!" << endl;
    else
        cout << "It is NOT a palindrome!" << endl;

    return 0;
}
