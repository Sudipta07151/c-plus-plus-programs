#include<vector>
void vectorPrac(){
    vector<char>vowels(5,'c');
    vector<int>scores{100,20,30,40};
    vector<float>temperatures{365,37.5};

    for(auto val: vowels){
        cout<<val<<endl;
    }
    for(auto val: scores){
        cout<<val<<endl;
    }
    cout<<"\n";
    scores.push_back(99);
    scores.pop_back();
    for(int i=0;i<scores.size();i++)
    {
        cout<<scores.at(i)<<endl;
    }
    //cout<<scores.at(7)<<endl;
    scores.pop_back();
    for(auto val: scores){
        cout<<val<<endl;
    }
    vector<string>names={"i","am","sudipta","07151"};
    for(auto val: names){
        cout<<val<<endl;
    }
    string str="hello";
   // str.push_back(string{"i am"});
    cout<<str;
    vector<vector<int>> movieRating
    {
        {1,2,3},
        {88,99,90},
        {100,23,25}
    };
    for(auto rows: movieRating){
        for(auto col:rows){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
