// a[b] <=> *(a+b)
bool isSubsequence(char * s, char * t){
    if (*s == '\0') {
        return true;
    }
    if (*t == '\0') {
        return false;
    }
    
    while (true) {
        if (*s == *t){
            s++;
            if (*s == '\0') {
                return true;
            }
        }
        t++;
        if (*t == '\0') {
            return false;
        }
    }
    
}