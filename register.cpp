#include<iostream>
    using namespace std;
        class stud
        {
            char name[10];
            int age;
        public:
            void getdata();
            void display();
        };
        void stud :: getdata()
        {
            cout<<"enter name:-  ";
            cin>>name;
            cout<<"enter age:-  ";
            cin>>age;
        }
        void stud :: display()
        {
            cout<<"name is:-  "<<name;
            cout<<"\nage is:-  "<<age;
        }
        int main ()
        {
            stud s;
            s.getdata();
            s.display();
            return 0;
        }


