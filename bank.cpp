#include<iostream>
    using namespace std;
        class bank
        {
            int acno;
            char depositor[10];
            int withdraw;
            int deposits;
            int balance;
            char type[5];
    public:
        void getdata();
        void display();
        int transaction();
        int initial();
        };
        void bank :: getdata()
        {
            cout<<"enter account no. :-  ";
            cin>>acno;
            cout<<"enter your name :-  ";
            cin>>depositor;
            cout<<"enter withdraw amount :-  ";
            cin>>withdraw;
            cout<<"enter deposit amount :-  ";
            cin>>deposits;
        }
        int bank :: initial()
        {
            balance = 4000;
        }
        int bank :: transaction()
        {
            balance = balance + deposits;
            balance = balance - withdraw;
        }
        void bank :: display()
        {
            cout<<"\naccount no. is :-  "<<acno;
            cout<<"\naccount holder name:-  "<<depositor;
            cout<<"\nbank account type:-  "<<type;
            cout<<"\na/c balance :-  "<<balance;
            cout<<"\ndeposits :-  "<<deposits;
            cout<<"\nwithdraw :-  "<<withdraw;
            cout<<"\n___________________________";
        }
        int main()
        {
            bank b[2];
            int i;
            for (i=1;i<=2;i++)
            {
                b[i].getdata();
            }
            for (i=1;i<2;i++)
            {
                b[i].initial();
            }
            for(i=1;i<=2;i++)
            {
                b[i].transaction();
            }
            for(i=1;i<=2;i++)
            {
                b[i].display();
            }

        }
