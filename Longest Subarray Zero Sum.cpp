#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

 int n = arr.size();

  int count = 0;

  for(int i=0; i<n; i++){

    int MaxSum = 0;
    
     for(int j=i; j<n; j++){
      MaxSum += arr[j];

      if(MaxSum == 0){
        count = max(count,j-i+1);
      }
    }
  }
   return count;
}
