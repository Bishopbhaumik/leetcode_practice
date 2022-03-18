class Solution {
public:
    int modulo=1e9+7;
    int countOrders(int n) {
        long long answer = 1;
        for (int i = 1; i <= n; i++) {
            answer = (answer * i)%modulo;
            answer = (answer * (2 * i - 1))%modulo;
        }
        return answer;
    }
};