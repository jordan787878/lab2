#include<iostream>
#include<cstdlib>
using namespace std;
class Bmi
{
  public:
  void setheight(int);
  void setweight(int);
  int  getheight();
  int  getweight();

  double calbmi();
  void category();

  
  private:
  int height;
  int weight;
   

};
