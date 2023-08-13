//bruteforce approch

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum = sum ^ arr[k];
            }
            if(sum == x){
                count ++;
            }
        }
    }
  return count;
}
COMPLEXITY : O(N^3)

// better approch 
#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int count = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum ^= arr[j];
            if(sum == x){
                count++;
            }
        }
    }
    return count;
}

COMPLEXITY : O(N^2)
