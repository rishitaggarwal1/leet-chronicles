class Solution {
public:
    int candy(vector<int>& ratings) {
        int peak=1,down=0,sum=1,i=1,n=ratings.size();
        while(i<n)
        {
           if(ratings[i]==ratings[i-1])
            {
                sum+=1;
                i++;
                continue;
            }
            peak=1;
            while(i<n && ratings[i]>ratings[i-1])
            {
                peak++;
                sum+=peak;
                i++;
            }
            down=1;
            while(i<n && ratings[i]<ratings[i-1])
            {
                sum+=down;
                down++;
                i++;
            }
            if(down>peak)
            {
                sum+=(down-peak);
            }
        }
        return sum;
    }
};