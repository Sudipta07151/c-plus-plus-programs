void Trainee(){
 int Result[3][3],count=1,max=0;
    float res[3]={0.0f};
    float h[3]={0.0f};
    for(auto &x:Result){
        cout<<"ROUND"<<count++<<endl;
        for(auto &y:x){
        cin>>y;
        if(y<0 || y>100){
            cout<<"NOT ALLOWED";
            return;
        }
    }
    }
    count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            res[count]+=Result[j][i];
        }
        res[count]/=3;
        res[count]=ceil(res[count]);
        count++;
    }


    for(auto x: res)
    {
        cout<<x<<endl;
    }
    max=res[0];
    h[0]=1;
    for(int i=1;i<3;i++)
    {
        if(res[i]>max){
        h[i-1]=0;
        h[i]=1;
        max=res[i];
        }
        else if(res[i]==max){
        h[i]=true;
        }
    }
    for(int i=0;i<3;i++){
    if(h[i]){
        cout<<"Trainee"<<i+1<<endl;
    }
    }
}
