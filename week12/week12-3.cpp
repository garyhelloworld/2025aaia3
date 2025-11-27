// week12-3.cpp 學習計畫 Math 倒數第二題
// LeedCode 43. Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 =="0" || num2 =="0") return "0";// 陷阱 0呈上任何數都是0
        int N1 = num1.length(), N2 = num2.length();
        vector<int> ans(N1+N2);
        for(int i = N1-1; i>=0; i--){ //兩層暴力 for迴圈
            for(int j = N2-1; j>=0; j--){ // 倒過來的迴圈
                // num[i] vs. num2[j] 要把字母乘數值
                ans[i+j+1] += (num1[i]-'0')*(num2[j] - '0');
                if(ans[i+j+1] > 9) ans [i+j] += ans[i+j+1] / 10; //進位
                ans[i+j+1] = ans[i+j+1] % 10;
            }
        }
        string strAns; // 答案字串
        if(ans[0] == 0){ //沒有進位
            for(int i = 1; i<N1+N2; i++){
                strAns += (char)(ans[i]+'0');
            }
        }
        else{ // 有進位 湊齊 N1+ N2
            for(int i = 0; i < N1+N2; i++){
                strAns += (char)(ans[i]+'0');
            }
        }
        return strAns;
    }
};
