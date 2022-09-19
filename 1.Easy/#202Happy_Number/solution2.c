int next_n(int n){
//  ex: n = 1234
//  1234 / 1     = 1234 % 10  = 4
//  1234 / 10    = 123  % 10  = 3
//  1234 / 100   = 12   % 10  = 2
//  1234 / 1000  = 1    % 10  = 1
//  1234 / 10000 = 0    
    int r = 0;
    while(n != 0) {
        int d = n % 10; 
        n /= 10;
        r += d * d; //加總每數平方合
    }
    return r;
}

bool isHappy(int n){
    int c = 0;
    while (n != 1){
        n = next_n(n);
        c+= 1;
        if(c > 1000){
            return false;
        }
    }
    return true;
}