char* addBinary(char* a, char* b) {

    int lenA = strlen(a);
    int lenB = strlen(b);
    int i = lenA - 1;
    int j = lenB - 1;
    int carry = 0, k = 0;
    char* resultado = (char*) malloc(10000);
    while(i >= 0 || j >= 0 || carry == 1){
        int total = carry;
        if(i>=0)
            total += a[i--] - '0';
        if(j>=0)
            total += b[j--] - '0';
        resultado[k++] = (total % 2) + '0';
        carry = total / 2;
    }

    //inverter a string de resultado e adicionar '\0' no final
    resultado[k] = '\0';
    for(int i = 0; i < k; i++, k--){
        char c = resultado[i];
        resultado[i] = resultado[k-1];
        resultado[k - 1] = c;
    }

    return resultado;
}