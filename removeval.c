int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    int i;
    for(i=0;i<numsSize;i++){

    if(nums[i]!=val){ //check if the val is not equal to elements in the array
        nums[k]=nums[i]; // if not move the element to array k and increment k
        k++;
     }
    }
    return k; // finally return k
}