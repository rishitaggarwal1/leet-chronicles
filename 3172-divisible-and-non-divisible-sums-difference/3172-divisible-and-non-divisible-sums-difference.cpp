class Solution {
public:
    int differenceOfSums(int n, int m) {
        long nn=n*(n+1)/2;
        int x=n/m;
        long mm=m*x*(x+1)/2;
        nn=nn-mm;
        return (int)(nn-mm);
    }
};