class Solution {
  String convertToTitle(int columnNumber) {
    String result = "";

    Map letters = {
      1: 'A',
      2: 'B',
      3: 'C',
      4: 'D',
      5: 'E',
      6: 'F',
      7: 'G',
      8: 'H',
      9: 'I',
      10: 'J',
      11: 'K',
      12: 'L',
      13: 'M',
      14: 'N',
      15: 'O',
      16: 'P',
      17: 'Q',
      18: 'R',
      19: 'S',
      20: 'T',
      21: 'U',
      22: 'V',
      23: 'W',
      24: 'X',
      25: 'Y',
      26: 'Z'
    };

    if (1 <= columnNumber && columnNumber <= 26) {
      return letters[columnNumber];
    } else {
      int n = 0;
      int numberOfColumns = columnNumber;
      while (numberOfColumns != 0) {
        numberOfColumns = (numberOfColumns / 26).toInt() <= 26?;
        n++;
      }

      for (var i = 0; i < n; i++) {
        result += letters[26];
      }
      result += letters[columnNumber % 26];
    }

    return result;
  }
}
