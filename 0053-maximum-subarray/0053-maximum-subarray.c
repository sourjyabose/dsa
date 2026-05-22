int max(int i,int j){
    return (i<=j)?j:i;
}
int maxSubArray(int* nums, int numsSize) {
    int current=-3232;
    int best=-23232;
    for(int i=0;i<numsSize;i++){
        current=max(nums[i],nums[i]+current);
        best=max(current,best);
    }
    return best;
}