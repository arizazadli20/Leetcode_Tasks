/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;
    int left=0;
    int right=numsSize-1;

    while (left<=right){
 
 if(nums[left] % 2 == 0){
   left ++;
 }
 else if (nums[right] % 2 != 0) {
            
            right --;
            
        }

else {
 
   int empty=nums[left];
   nums[left]=nums[right];
   nums[right]=empty;

   left ++;
   right --;


}

    }
    return nums;
}