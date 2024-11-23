class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) { return n; }

        int *solution = new int[n + 1];
        solution[0] = 0;
        solution[1] = 1;
        solution[2] = 1;

        for (int i = 3; i <= n; i++) {
            solution[i] = solution[i - 1] + solution[i - 2] + solution[i - 3];
        }

        int result = solution[n];
        delete[]solution;

        return result;
    }
};