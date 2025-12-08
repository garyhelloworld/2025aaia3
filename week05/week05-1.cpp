// week 05-1.cpp
// LeetCode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // cin iostream
        string word; // 字串的word
        // ss >> word 很像 cin >> word
        while(ss >> word){
            //什麼都不做
        }
    return word.length();
    }
};
