 #include<iostream>
 #include<vector>
 #include<string>
 #include<map>
 using namespace std;
 class MovieDetails
 {
   public:
   float time;
   float rating;
   MovieDetails(float time,float rating)
   {
     if(time<=0.0f)
     {
       throw "RUNTIME CANT BE 0";
     }
     else
     {
      this->time=time;
     }
     this->rating=rating;
   }
   void getMovieDetails()
   {
     cout<<"Runtime in min : "<<time<<endl<<"Rating: "<<rating<<endl;
   }
 };
 class Genres
 {
   private:
   map<string,MovieDetails> movies;
   public:
   Genres(string name,MovieDetails obj)
   {
     movies.insert(make_pair(name,obj));
   }
   void getMovies()
   {
     for(auto iter=movies.begin();iter!=movies.end();iter++)
     {
       cout<<"Name: "<<iter->first<<endl;
       iter->second.getMovieDetails();
     }
     cout<<endl;
   }
 };

 int main()
 {
   try{
   MovieDetails obj(92.0f,7.0f);
   Genres inspirational("Contagion",obj);
   inspirational.getMovies();
   }
   catch(const char *e)
   {
     cout<<e;
   }
   
   return 0;
 }