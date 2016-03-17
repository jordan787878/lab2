#include<iostream>
#include<cstdlib>
#include"bmi.h"
#include<fstream>
#include<iomanip>
int main()
{  
  ifstream readdata("bmi",ios::in);

  if(!readdata)
  { cerr <<  "error!"; exit(1); }
  string headline;
  int h;
  int w;
  Bmi bmivalue;

  getline(readdata,headline);
  while( readdata >> h >> w )

{
   bmivalue.setheight(h);
   bmivalue.setweight(w);
   cout << fixed << setprecision(2) << bmivalue.calbmi();
   cout << "\t";
   bmivalue.category();
   cout << endl;
   if( h==0 && w==0) { break;}

}
return 0;
}
