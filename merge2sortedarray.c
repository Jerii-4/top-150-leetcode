void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=m-1; //to go the last index of both arrays
    int j=n-1;
    int k=m+n-1;
    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){ // conparing to see if it reaches zero and if its bigger or not
            nums1[k]=nums1[i]; //saves the last elemnt of first array
            k--;
            i--;
        }else{
            nums1[k]=nums2[j]; // saves the last e;lemnet if first array
            k--;
            j--;

        }

    }
}