#include<iostream>
#include<vector>
using namespace std;
int maxProductsubarray(vector<int>&nums){
    int result = nums[0];
    for(int i=0;i<nums.size()-1;i++){
        int p=nums[i];
        for(int j=i+1;j<nums.size();j++){
            result = max(result,p);
            p *= nums[j];
        }
        result=max(result,p);
    }
    return result;
}
int main(){
    vector<int>nums={1,2,-3,0,-4,-5};
   cout<< maxProductsubarray(nums);

}