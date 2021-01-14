#include <iostream>
using namespace std;

class base
{
    public:
       void show_base(){
           std::cout<<"I am from base !"<<endl;
       }
};

class derived : public base
{
    public:
       void show_drv(){
           cout<<"I am from derived !"<<endl;
       }
};

int main(){
   base *b;
   base abc;
   derived pqr;
   b = &abc;
   b->show_base();
   ((derived *)b)->show_drv();
   return 0;
}
