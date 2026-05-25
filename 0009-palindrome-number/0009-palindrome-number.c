bool isPalindrome(int x) {
    int arr[999];
    int i=0;
    int num=x;
    if(x<10 && x>0){
        return 1;
    }if(x<0){return 0;}
    while(1){
        arr[i]=num%10;
        num=num/10;
        if(num<10){
            arr[++i]=num;
            break;
        }
        i++;

    }
    
    for(int j=0;j!=i;j++){
        if(arr[i-j]!=arr[j]){
            return 0;
        }
    }
return 1;
}