int sumArray(int a[], int n) {
    int s = 0, i;
    for(i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}