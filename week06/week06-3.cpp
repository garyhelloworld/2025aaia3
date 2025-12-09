// week06-3.cpp
// LeeCode 學習計畫 682. Baseball Game
class Solution {
public:
int calPoints(vector<string>& operations) {
    vector<int> a; // 陣列 a
    for(string op : operations) { // C++ 進階迴圈
        //cout << op << "\n"; // 試試看，會印出什麼東西
        if(op[0]=='+') { // 把兩數相加，再塞回去
            int size = a.size();
            int new_val = a[size-1] + a[size-2];
            a.push_back(new_val); // 塞回去
        }
        else if(op[0]=='D') { // 複製最後1位，再塞回去
            int size = a.size();
            int new_val = a[size-1] * 2;
            a.push_back(new_val); // 塞回去
        }
        else if(op[0]=='C') { // 吐掉最後1位
            a.pop_back();
        }
        else { // 把 stoi(op) 整數，塞回去
            a.push_back(stoi(op)); // 塞回去
        }
    }

    // 最後，用 for 迴圈，把陣列 a 的值，全部加起來
    int ans = 0;
    for(int now : a) { // C++ 進階迴圈，也可以用 for(int i=0; i<a.size(); i++) { int now=a[i]; }
        ans += now;
    }

    return ans; // 先隨便 return 0 等一下再改
}
};
