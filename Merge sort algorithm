class Solution
{
    public:
      void merge(int arr[], int low, int mid, int high)
    {
         // Your code here
         vector<int> v;

        int left = low;                                 
        int right = mid+1;                              
        while(left<=mid and right<= high){
            if(arr[left] < arr[right]){
                v.push_back(arr[left]);
                left++;
            }
            else{
            v.push_back(arr[right]);
            right++;
            }
        }
        while(left<=mid){
            v.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            v.push_back(arr[right]);
            right++;
        }
    
        for(int i=low;i<=high;i++){
            arr[i] = v[i-low];
        }
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {
           //code here  
        if(low == high){
            return;
        }   

        int mid = (low + high)/2;
        mergeSort(arr,low,mid);                
        mergeSort(arr,mid+1,high);                 

        merge(arr,low,mid,high);
    }
};
