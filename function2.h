#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class bangun_ruang_sisi_lancip
{
 protected:
   double x,y,z;
   float phi;
       
 public:
   virtual void get_data()=0;
   virtual void display_area()=0;
};
class kerucut: public bangun_ruang_sisi_lancip
{
   public:
    void get_data(void)
    {
      cout<<"Menghitung volume kerucut : \n\n";
      cout<<"masukkan nilai jari jari = "; cin>>x;
      cout<<"masukkan nilai tinggi = "; cin>>y;
    }
    void display_area(void)
    {
       double volume;
       float phi = 3.14;
       volume =(phi*x*x*y)/3;
       cout<<"volume kerucut adalah = "<<volume<<"\n";
    }
};
