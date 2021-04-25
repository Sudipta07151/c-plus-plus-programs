string*  trainProblem(float trainA[],int n,float t)
{
    string trainB[n]{};
    for(int i=0;i<n-1;i++){
        trainB[i]=to_string(trainA[i+1]-trainA[i]);
    }
    for(auto val:trainB){
        cout<<val<<" ";
    }
    if(t>24.00 || t<0.0 ){
        cout<<"INVALID TIME";
        return;
    }
    int hr,m,x;
    m=int(t);
    else{
        for(int i=0;i<n;i++){
            if(stoi(trainB[i])+m>60){
                x=stoi(trainB[i])+int(t);
            }
        }
    }
    return trainB;
}
