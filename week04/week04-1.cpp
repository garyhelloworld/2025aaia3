// week 04-1.cpp
// LeetCode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // 秨﹍耻硂或瞺
        while(numBottles >= numExchange){ // 狦瞺计 >= 传秖 碞传
            numBottles = numBottles - numExchange + 1; // 传1瞺都
            ans++; // 耻1瞺
            numExchange ++; //传夹非 瞺
        }
        return ans;
    }
};
