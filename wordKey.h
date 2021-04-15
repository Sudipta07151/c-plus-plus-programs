#include<string>
void wordKey(){
    string word;
    int flag=0;
    cout<<"ENTER word: ";
    cin>>word;
    char *str[]={"break","case","continue","default","defer","for","func","goto","else","if","map","range","return","struct","type","var"};
    for(int i=0; i<15;i++){
        string cpy{str[i]};
        if((cpy.compare(word))==0){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"WORD IS A KEY";
    }
    else{
        cout<<"NOT A KEY";
    }
}
