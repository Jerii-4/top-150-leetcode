bool canJump(int* nums, int numsSize) {
    int i,goal=numsSize-1; //start from the last index
for (i=numsSize-2;i>=0;i--){ traverse from last-1
    if(i+nums[i]>=goal){ // if the index and itys maximum jump,i.e the value is greater than or equal to goal then
        goal=i; //i will be the new goal
    }
}
if(goal==0){ //if the goal reaches 0 then true else false
    return true;
}
return false;
}