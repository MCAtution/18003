#include<iostream>
    using namespace std;
        class score
            {
                char name[10];
                int runs;
                int fours;
                int sixes;
            public:
                void getdata();
                void display();
                int scorecount();
                int totalrun();
            };
            void score :: getdata()
            {
                cout<<"batsman name :-  ";
                cin>>name;
                cout<<"fours :-  ";
                cin>>fours;
                cout<<"sixes  :-  ";
                cin>>sixes;
            }
            int score :: scorecount()
            {
                runs = 0;
                runs = runs+(4*fours);
                runs = runs+(6*sixes);
            }
            void score :: display()
            {
                cout<<"batsman name :-  "<<name;
                cout<<"\ntotal score :-  "<<runs;
                cout<<"\nfours :-  "<<fours;
                cout<<"\nsixes :-  "<<sixes;
            }
            int main()
            {
                score s;
                s.getdata();
                s.scorecount();
                s.display();

            }
