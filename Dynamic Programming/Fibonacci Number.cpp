class Solution {
public:
    int fib(int n) {
        if (n == 0) { return 0; }

        int *solution = new int[n + 1];

        solution[0] = 0;
        solution[1] = 1;

        for (int i = 2; i <= n; i++) {
            solution[i] = solution[i - 1] + solution[i - 2];
        }

        int result = solution[n];
        delete[] solution;

        return result;
    }
};