#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // // Getting the number of rows to iterate through!
        // int rowFirst = 0;
        // int rowLast = matrix.size() - 1;

        // int Row = 0;
        // while (rowLast >= rowFirst) {
        //     int mid = ((rowLast - rowFirst) / 2) + rowFirst;
        //     Row = mid;

        //     if (matrix[mid][0] == target) { return true; }

        //     if (matrix[mid][matrix[mid].size() - 1] > target) {
        //         rowLast = mid - 1;
        //     }
        //     else if (matrix[mid][matrix[mid].size() - 1] < target) {
        //         rowFirst = mid + 1;
        //     }
        //     else {
        //         return true;
        //     }
        // }

        // // Now, rowFirst is the row index where target might exist
        // if (rowFirst >= matrix.size() || rowFirst < 0)
        //     return false;

        // // Declaring the first for the row that we found!
        // int colFirst = 0;
        // // Declaring the last for the row that we found!
        // int colLast = matrix[Row].size() - 1;

        // while (colLast >= colFirst) {
        //     int mid = ((colLast - colFirst) / 2) + colFirst;

        //     if (matrix[Row][mid] > target) {
        //         colLast = mid - 1;
        //     }
        //     else if (matrix[Row][mid] < target) {
        //         colFirst = mid + 1;
        //     }
        //     else {
        //         return true;
        //     }

        // }
        // return false;


        /**
         * The Upper solution won't work for the Test cases where the number that we are
         * searching for is in the Mid Row and it's in the First mid Row!
         * Because we are comparing the last number that is in the row and if it's bigger than the number
         * that we want to search for it will skip this row and the solution is in here!
         *
         * So I am trying to implement another solution where I will search each row before going
         * to the next row
        */

        int rowFirst = 0;
        int rowLast = matrix.size() - 1;

        while (rowLast >= rowFirst) {
            int mid = rowFirst + (rowLast - rowFirst) / 2;
            vector<int>& Row = matrix[mid];

            int colFirst = 0;
            int colLast = Row.size() - 1;

            while (colLast >= colFirst) {
                int mid = colFirst + (colLast - colFirst) / 2;
                if (Row[mid] > target) { colLast = mid - 1; }
                else if (Row[mid] < target) { colFirst = mid + 1; }
                else { return true; }
            }

            if (matrix[mid][matrix[mid].size() - 1] > target) { rowLast = mid - 1; }
            else if (matrix[mid][matrix[mid].size() - 1] < target) { rowFirst = mid + 1; }
            else { return true; }
        }
        return false;
    }
};