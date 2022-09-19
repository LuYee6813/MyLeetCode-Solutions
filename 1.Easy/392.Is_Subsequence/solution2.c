bool isSubsequence(char * s, char * t){
    int i = 0, j = 0;
    if (s[0] == '\0') {
        return true;
    }
    if (t[0] == '\0') {
        return false;
    }
    
    while (j < strlen(t)) {
        if (s[i] == t[j]){
            i++;
            if (s[i] == '\0') {
                return true;
            }
        }
        j++;
    }
    return false;
    
}