// week10-2.cpp 埃程 程 キА羱
// leetcode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; // р羱癬ㄓ
        int N = salary.size(); // 羆ΤN
        int M = salary[0], m = salary[0]; // р材0 讽程 程
        for(int i = 0; i < N ; i++){
            total += salary[i]; // р羱癬ㄓ
            if(salary[i] > M) M = salary[i]; // ゑ程 程传
            if(salary[i] < m) m = salary[i]; // ゑ程 程传
        }
        //return
        return(total -M -m) / (N-2);
    }

};
