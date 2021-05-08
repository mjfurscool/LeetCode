
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Follow up for ”Remove Duplicates”: What if duplicates are allowed at most twice?
For example, Given sorted array A = [1,1,1,2,2,3],
Your function should return length = 5, and A is now [1,1,2,2,3]
*/

// int removeDuplicates(vector<int>& nums){
//     if (nums.size() <= 2) return nums.size();
//     int index = 2;
//     for (int i = 2; i < nums.size(); i++){
//         if (nums[i] != nums[index - 2])
//             nums[index++] = nums[i];
//     }
//     return index;
// }

int removeDuplicates(vector<int>& nums){
    int count = 1;
    int index = 1;
    for(int i = 1; i <nums.size(); i++){
        if(nums[i] == nums[i-1]){
            count++;
        }else{
            count = 1;
        }
        if(count <= 2){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}


int main(){
    vector<int> A = {1,1,1,2,2,2,3,3,3,3,3,4,4,4};
    int l = removeDuplicates(A);
    cout << l <<' '<< A.size() << endl;
    for(int i=0; i < l; i++){
        cout<<A[i];
    }
    return 0;
}
