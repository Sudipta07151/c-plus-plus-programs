void createFullPyramid(int n)
{
    if(n%2!=0)
        n++;
    int mid=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n*2;j++)
        {
            if(j==mid && i==0)
            {
                cout<<'*';
            }
            else if(j==mid-i)
            {
                for(int k=mid-i;k<=mid+i;k++)
                {
                    cout<<"*";
                }

            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
