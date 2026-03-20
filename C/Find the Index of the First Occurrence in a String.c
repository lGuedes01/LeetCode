int strStr(char* haystack, char* needle) {

    int len_h = strlen(haystack);
    int len_n = strlen(needle);
    for(int i = 0; i < len_h; i++){
        int j = 0;
        int k = -1;
        int w = i;
        while(haystack[w] == needle[j]){
            if(j == 0){k = w;}
            if(j == len_n - 1){return k;}
            w++;
            j++;
        }

    }
    return -1;
}