int majorityElement(int* nums, int numsSize) {
    int i,candidate,count=0;
    for( i = 0; i < numsSize; i++){

    if(count ==0) //if there is no repition then the number will be the candidate
        candidate = nums[i];
        
        if(nums[i]==candidate){ //if num = candidate then count increases
            count++;
        }else{
            count--; // else it decreases
        }
    }
    return candidate;
}