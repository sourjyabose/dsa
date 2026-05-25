int removeDuplicates(int* nums, int numsSize) {
    int min=999;
    int max=-999;
    int arr[999]={0};
    int prev=-999;
    int ptr=0;
for(int i=0;i<numsSize;i++){
   if(nums[i]!=prev){
    arr[ptr]=nums[i];
    ptr+=1;
    prev=nums[i];
   }

}
for(int i=0;i!=ptr;i++){
nums[i]=arr[i];
}
return ptr;
}