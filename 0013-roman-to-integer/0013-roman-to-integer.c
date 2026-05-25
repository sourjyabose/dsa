int decoder(char c){
    switch(c){
        case 'I':
        return 1;
        break;
        case 'V':
        return 5;
        break;
        case 'X':
        return 10;
        break;
        case 'L':
        return 50;
        case 'C':
        return 100;
        case 'D':
        return 500;
        case 'M':
        return 1000;
    }
    return 0;
}
int arr[999]={0};
int romanToInt(char* s) {
    int len=strlen(s);
    for(int i=len-1;i>-1;i--){
        arr[len-i-1]=decoder(s[i]);
    }
    int result=arr[0];
    for(int k=1;k<len;k++){
        if(arr[k]>=arr[k-1]){
            result+=arr[k];
        }else{
            result-=arr[k];
        }
    }
    return result;
}