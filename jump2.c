int jump(int* nums, int numsSize) {
    int jumps = 0; //total no of jumps
    int farthest = 0; // for the farthest jump
    int End = 0; // no of jumps the current value can take you

    for (int i = 0; i < numsSize - 1; i++) {
        if (i + nums[i] > farthest) { //if the current i and its value is bigger than farthest
            farthest = i + nums[i]; //update that as new farthest
        }

        if (i == End) { //checks if you reaches the maximum point
            jumps++; //then jump increments
            End = farthest; //the current farthest value become the end
        }
    }

    return jumps; // returns miminum number of jumps
}
