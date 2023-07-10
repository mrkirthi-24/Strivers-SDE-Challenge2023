//Two pointers
//TC = O(2NLOGN) + O(2N)
//SC = O(1)

int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    
    int plat = 1, i=1, j=0, ans = 1;
    while(i<n && j<n){
        if(at[i] <= dt[j]){
            plat++;
            i++;
        }else if (at[i] > dt[j]){
            plat--;
            j++;
        }

        if(plat > ans) ans = plat;
    }
    return ans;
}