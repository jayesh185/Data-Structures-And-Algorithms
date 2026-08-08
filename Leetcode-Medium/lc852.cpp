class Solution {
public:
//this is leetcode problem 852. Peak Index in a Mountain Array
//we simply used binary search here . 
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size() ;
        int low = 1 ;
        int high = n-2 ;
        
        while( low<=high){
            int mid = low + (  high - low) / 2;
            if( arr[mid] > arr[mid-1] && arr[mid] >arr[mid+1]) return mid ;
            if( arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1])low = mid+1 ;
            if( arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1])high = mid-1 ;
        }

        return -1 ;
    }
};