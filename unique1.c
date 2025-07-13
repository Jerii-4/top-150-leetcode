//easy

int removeDuplicates(int* nums, int numsSize) {
    int i,k=1; //k=1 sincwe first inpuy will be uniwuw
    for (i=1;i<numsSize;i++){
        if(nums[i]!=nums[j-1]){ // if condioton checks if the next elemnt is unique in the unique array
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}