// medium
int removeDuplicates(int* nums, int numsSize) {
    
    int i,k=2; //first 2 elemnts will be unique
     if(numsSize<=2){
        return numsSize; //if numsize is less than or equal to 2
    }    
    for (i=2;i<numsSize;i++){
        if(nums[i]!=nums[k-2]){ //checks if there are more than 1 reppitiion
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}