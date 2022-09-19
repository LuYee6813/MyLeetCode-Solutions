

void reverseString(char* s, int sSize){
    for (int i = 0; i < sSize / 2; i++)
    {
        int j = sSize - 1 - i;
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
} 