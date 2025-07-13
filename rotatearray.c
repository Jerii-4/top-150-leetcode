
// medium

void reverse(int* num,int start, int end){ //first create a reverse function
    int temp;
    while(start<end){ // while until start=end
        temp=num[start];
        num[start]=num[end]; // to swap
        num[end]=temp;
        start++; // both of this to make sure start and end becomes equal
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
   
       k=k%numsSize; // if k<numsSize
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}