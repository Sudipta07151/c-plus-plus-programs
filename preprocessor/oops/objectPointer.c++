#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Team
{
private:
    vector<string> players;
    int total;

public:
    Team()
    {
        this->total=0;
    }
    void setNames()
    {
        string name;
        for(int i=0;i<5;i++)
        {
            cout<<"ENTER" <<i+1<< "PLAYER: ";
            getline(cin,name);
            players.push_back(name);            
        }
    }
    vector<string> getName()
    {
        vector<string> store;
        for(int i=0;i<5;i++)
        {
            store.push_back(this->players[i]);
        }
        return store;
    }
    void setScore(int);
    int getScore();
};
 
void Team::setScore(int val)
{
    this->total=val;
}

int Team::getScore()
{
    return this->total;
}
void display(vector<string> vec)
{
    for(int i=0;i<5;i++)
    {
        cout<<vec.at(i)<<endl;
    }
}

int main()
{
    Team *team1 = new Team;
    team1->setNames();
    vector<string> get=team1->getName();
    display(get);
    team1->setScore(185);
    cout<<team1->getScore();
    return 0;
}