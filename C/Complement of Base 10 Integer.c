int bitwiseComplement(int n) {
    char* bin =  (char*) malloc(1000000);
    int i = 0;
    if(n == 0)
        bin[i++] = '1';
    while(n > 0){
        //reverte -> complemento
        if(n%2 == 1)
            bin[i++] = '0';
        else if(n%2 == 0)
            bin[i++] = '1';
        n = n/2;
    }
    bin[i] = '\0';
    //inverte a string
    for(int j=0, k = i-1; j<=k; j++, k--){
        char temp = bin[j];
        bin[j] = bin[k];
        bin[k] = temp;
    }
    //transforma em decimal o bin
    int lenBin = strlen(bin);
    int total = 0;
    for(int b = lenBin - 1, p = 0;b >= 0; b--,p++){
        int p2 = p;
        int res = bin[b] - '0';
        while (p2 != 0 && res != 0)
        {
            res = res * 2;
            p2 --;
        }
        total += res;
    }
    return total;
    

}