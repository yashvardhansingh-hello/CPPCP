#include<bits/stdc++.h>
using namespace std;

int binarySearchIt(vector<int> nums, int search){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid]==search) return mid;
        else{
            if(nums[mid]<search) low = mid+1;
            else high = mid-1;
        }
    }
    return -1;
}

int binarySearchRe(vector<int> nums, int search, int low, int high){
    if(low>high) return -1;
    int mid = (low + high)/2;
    if(nums[mid] == search) return mid;
    else{
        if(nums[mid]<search) return binarySearchRe(nums, search, mid+1, high);
        else return binarySearchRe(nums, search, low, mid-1);
    }
}

int lowerBound(vector<int> nums, int target){
    int n = nums.size();
    int ans = n;
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid]>=target) {
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,7,8};
    cout<<lowerBound(arr, 6);
    return 0;
}