
void quick_sort(int s[], int l, int r){
    int i = l;
    int j = r;
    int x = s[l];
    while(i < j){
        while(i < j && s[j] >= x){  // Searching from right side until find a s[j] < x
            j--;
        }
        if(i < j)
            s[i++] = s[j];// put the s[j] to left side.

        while(i < j && s[i] < x){
            i++;
        }
        if(i < j)
            s[j--] = s[i];
    }
    s[i] = x;
    quick_sort(s, l, i-1);
    quick_sort(s, i+1, r);
}