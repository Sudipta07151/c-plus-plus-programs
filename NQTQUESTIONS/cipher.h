void cipher(string str,int key)
{
    for(int i=0; i<str.size();i++){
        int value=int(str[i]);
        cout<<"val= "<<value<<endl;
        if(value>=48 && value<=57){
            if((key+value)>57)
            {
                value=48+(58-value);
            }
            else
            {
                value=value+key;
            }
        }
        else if(value>=97 && value<=122){
            if((key+value)>122)
            {
                value=97+(123-value);
            }
            else
            {
                value=value+key;
            }
        }
        cout<<"changed val= "<<value<<endl;
        char ch=char(value);
        str[i]=ch;
    }
    for(auto val:str){
        cout<<val;
    }
}
