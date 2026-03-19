int value(char roman){
    switch (roman){
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
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
            break;
    }
}

int romanToInt(char* s) {
    int h = strlen(s);
    int total = 0;
    int temp = 0;
    //int total = value(s[h-1]);
    if(h == 1)
        return value(s[0]);
    for(int i = h - 1; i >= 0 ;i--){
        int atual = value(s[i]);
        if(temp <= atual)
            total += atual;
        else
            total -= atual;
        temp = atual;
    }
    return total;
}