 #include<iostream>
 #include<vector>
 #include<string>
 #include<map>
 using namespace std;
 class Players
 {
   private:
   string name{};
   string country{};
   int atk,def;
   public:
   Players()
   {
     throw "PLEASE PROVIDE DETAILS";
   }
   Players(string name,int atk=50,int def=50,string country="undefined")
   {
     this->name=name;
     this->country=country;
     this->atk=atk;
     this->def=def;
   }
   void getPlayerDetails(); 
 };

 void Players::getPlayerDetails()
 {
     cout<<"NAME: "<<name<<endl<<"COUNTRY: "<<country<<endl<<"ATTACK: "<<atk<<endl<<"DEFEND: "<<def<<endl<<endl;
 }
 class Forward:public Players
 {
   private:
   int speed;
   int poss;
   public:
   Forward(string name,string country,int atk=50,int def=50,int speed=50,int poss=50)
   :Players(name,atk,def,country)
   {
      this->speed=speed;
      this->poss=poss;  
   }
 };

 int main()
 {
   try{
   Players obj("Kane",87,67);
   obj.getPlayerDetails();
   Forward fwd("Morata","Spain",89,78,78,90);
   fwd.getPlayerDetails();
   return 0;
   }
   catch(const char *err)
   {
     cout<<err;
   }
 }