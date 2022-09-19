double average(int* salary, int salarySize){
    int temp = 0;
    int min = salary[0];
    int max = min;
    for(int i = 0; i < salarySize; i++) {
        temp += salary[i];
        min = salary[i] < min ? salary[i] : min;
        max = salary[i] > max ? salary[i] : max;
    }
    temp = temp - min - max;
    return (double)temp/(salarySize - 2);

}