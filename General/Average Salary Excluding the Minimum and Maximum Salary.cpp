#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    double average(vector<int> &salary) {
        // First I need to find the max and min salary and their positions!
        int max = salary[0];
        int maxIndex = 0;
        for (int i = 1; i < salary.size(); i++) {
            if (salary[i] > max) {
                max = salary[i];
                maxIndex = i;
            }
        }

        int min = salary[0];
        int minIndex = 0;
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] < min) {
                min = salary[i];
                minIndex = i;
            }
        }

        double sum = 0;
        for (int i = 0; i < salary.size(); i++) {
            if (i != maxIndex && i != minIndex) {
                sum += salary[i];
            }
        }
        return (sum / (salary.size() - 2));
    }
};