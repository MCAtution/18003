#include<iostream>
    using namespace std;
        class reg
         {
            int roll;
            char name[10];
            char email[20];
            int ph;
        public:
            void getdata();
            void display();
            void update_mail();
         };
         void reg ::getdata()
           {
            cout<<"enter roll :- ";
            cin>>roll;
            cout<<"enter name :- ";
            cin>>name;
            cout<<"enter email :- ";
            cin>>email;
            cout<<"enter phone :- ";
            cin>>ph;
            }
            void reg :: update_mail()
            {
                int u;
                char up_mail[20];
                cout<<"enter your roll :- ";
                cin>>u;
                if(roll==u)
                {
                    cout<<"enter new gmail for update :-  ";
                    cin>>up_mail;
                    email=up_mail;
                }
                else
                {
                    cout<<"roll not found ... ";
                }
            }
            void reg :: display()
             {
            cout<<roll;
            cout<<name;
            cout<<email;
            cout<<ph;
            }
         int main()
         {
             reg r[2];
             int i,f;
                for(i=1;i<=2;i++)
             {
                 r.getdata();
             }
                for(i=1;i<=2;i++)
             {
                 r.update_mail();
             }
                for(i=1;i<=2;i++)
             {
                 r.display();
             }
             cout<<"\n1. update mail\n2.exit";
             cin>>f;
            switch(f)
            {
            case 1: r.update_mail();
            break;
            case 2: break;
            }
         }
