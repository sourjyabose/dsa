int* merge(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int* arr=(int *)malloc((nums1Size+nums2Size)*sizeof(int));
    int j=0;
    int k=0;
    for(int i=0;i<(nums1Size+nums2Size);i++){
        if(j<nums1Size && (k)==nums2Size){
            
            arr[i]=nums1[j];
            j++;
            continue;
        }
        if(k<nums2Size && (j)==nums1Size){
            
            arr[i]=nums2[k];
            k++;
            continue;
        }
        if(nums1[j]<=nums2[k]){
            arr[i]=nums1[j];
            j++;
        
        }else{
            arr[i]=nums2[k];
            k++;
        }
    }
    return arr;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *arr=merge(nums1, nums1Size, nums2, nums2Size);
    int index=nums1Size+nums2Size;
    if(index%2!=0){
        index=index/2;
        return arr[index];
    }else{
        index=index/2;
        double res=(arr[index-1]+arr[index])/2.0;
        return res;
    }
    
}