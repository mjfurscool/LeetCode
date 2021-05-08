
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Given a sorted array, remove the duplicates in place such that each element appear only once
and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].
*/
//---------------mehtod1---------------
// int removeDuplicates(vector<int>& nums){
//     int index=0;
//     for(int i = 1; i < nums.size();i++){
//         if(nums[index]!=nums[i]){
//             index++;
//             nums[index] = nums[i];
//         }
    
//     }
//     return index + 1;
// }

//-----------method2----------------
int removeDuplicates(vector<int>& nums){
    return distance(nums.begin(), unique(nums.begin(),nums.end()));
}

int main(){
    vector<int> A = {1,1,2,3,4,4};
    int l = removeDuplicates(A);
    cout << l <<' '<< A.size() << endl;
    for(int i=0; i < A.size(); i++){
        cout<<A[i];
    }
    return 0;
}
