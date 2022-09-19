typedef struct {
    int* a;
    int aSize;
} Solution;


Solution* solutionCreate(int* w, int wSize) {       // Python3 語法對照
    Solution* self = malloc(sizeof(Solution));     
    self->a = malloc(sizeof(int)*wSize);            // a = [None] * len(w)
    self->aSize = wSize;
        
    self->a[0] = w[0];                              // a[0] = w[0]
    for (int i = 1; i < wSize; i++){                // for i in range(1, len(w)):
        self->a[i] = self->a[i-1] + w[i];           //     a[i] = a[i-1] + w[i]
    }
    return self;
}

int solutionPickIndex(Solution* self) {
    int d = rand() % self->a[self->aSize-1];        // d = random.randrange(len(self.__a[-1]))    
    
    int l = 0, r = self->aSize;                     // l, r = 0, len(self.__a)
    while (l < r) {                                 // while l < r:
        int mid = (l+r)/2;                          //     mid = (l+r)//2
        if (d < self->a[mid]) {                     //     if d < self.__a[mid]:
            if (mid == 0 || d >= self->a[mid-1]) {  //         if mid == 0 or d >= self.__a[mid-1]:
                return mid;                         //              return mid
            }
            r = mid;                                //          r = mid
        } else {
            l = mid+1;                              //          l = mid + 1
        }
    }
    return -1;
}

void solutionFree(Solution* obj) {
    free(obj->a);
    free(obj);
}

