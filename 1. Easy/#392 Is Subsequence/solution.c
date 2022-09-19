bool isSubsequence(char * s, char * t){
    int i = 0, j = 0;
    if (strlen(s) == 0) {
        return true;
    }
    if (strlen(t) == 0) {
        return false;
    }
    
    while (j < strlen(t)) {
        if (s[i] == t[j]){
            i += 1;
            if (i == strlen(s)){
                return true;
            }
        }
        j += 1;
    }
    return false;
    
}