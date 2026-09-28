int minSubArrayLen(int target, int* nums, int numsSize) {
    
int left=0;
int right=0;
int currentSum=0;
int minSum=999999;


while(right<numsSize){

    currentSum=currentSum+nums[right];


    while (currentSum >= target){

        int currentWindow=right-left+1;

        if(currentWindow<minSum){

            minSum=currentWindow;
            
        }
currentSum=currentSum-nums[left];
left++;

    }right++;
}

if (minSum==999999){
    return 0;
}
else{
    return minSum;
}




}