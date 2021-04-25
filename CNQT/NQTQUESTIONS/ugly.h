int nthUglyNumber(int n) {
        int count;
        int num=1;
        while(n>0){
            count=num;
            while(count>=1)
            {
                if(count==1){
                    break;
                }
                else if(count%2==0)
                {
                    count/=2;
                }
                else if(count%3==0)
                {
                    count/=3;
                }
                else if(count%5==0)
                {
                    count/=5;
                }
                else
                {
                    break;
                }
            }
        if(count==1){
            n--;
        }
        num++;
    }
    return --num;
}
