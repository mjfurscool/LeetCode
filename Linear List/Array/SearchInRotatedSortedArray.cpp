
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
You are given a target value to search. If found in the array return its index, otherwise return -1.
You may assume no duplicate exists in the array.
*/



int search(const vector<int>& nums, int target){
    int first = 0, last = nums.size();
    while(first!=last){//
        const int mid = first + (last - first)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[first] <=nums[mid]){//pivot on the right
            if(nums[first]<=target && target < nums[mid])//target on the non-rotated side
                last = mid;
            else
                first = mid + 1;
        }else{//pivot on the left
            if(nums[mid]<=target && target < nums[last-1])//target on the non-rotated side
                first = mid + 1;
            else
                last = mid;
        }
    }
    return -1 ;//not found
}


int main(){
    vector<int> A = {4,5,6,7,0,1,2};
    int target = 0;
    int result = search(A, target);
    cout  <<result << endl;
    return 0;
}