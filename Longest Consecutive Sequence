#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
  set < int > hashSet;
  for (int num: arr) {
    hashSet.insert(num);
  }

  int longestStreak = 0;

  for (int num: arr) {
    if (!hashSet.count(num - 1)) {
      int currentNum = num;
      int currentStreak = 1;

      while (hashSet.count(currentNum + 1)) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}
