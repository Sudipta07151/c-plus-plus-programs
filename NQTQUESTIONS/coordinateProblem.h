void CoordProblem(){
    int times,x=0,y=0;
    cout<<"TIMES: ";
    cin>>times;
    char turn='R';
    while(times>0){
        switch(turn){
        case 'R':
            x=abs(x)+10;
            y=abs(y);
            turn='U';
            break;
        case 'U':
            y=y+20;
            turn='L';
            break;
        case 'L':
            x=-(x+10);
            turn='D';
            break;
        case 'D':
            y=-(y);
            turn='R';
            break;
        }
        times--;
    }
    cout<<"("<<x<<","<<y<<")";
}
