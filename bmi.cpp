#include<iostream>
#include<cstdlib>
#include"bmi.h"
#include<math.h>
using namespace std;

void Bmi::setheight(int h)
{ height=h;}

void Bmi::setweight(int w)
{ weight=w; }

int Bmi::getheight()
{ return height; }

int Bmi::getweight()
{ return weight; }

double Bmi::calbmi()
{ return (double)(getweight()/pow((double)getheight()/100,2)); }

void Bmi::category()
{
   if ( calbmi() < 15 )
   { cout << "Very severely underweight"; }

   else if ( calbmi() < 16 )
   { cout << "Severely underweight"; }

   else if ( calbmi() < 18.5 )
   { cout << "Underweight"; }

   else if ( calbmi() < 25 )
   { cout << "Normal"; }

   else if ( calbmi() < 30)
   { cout << "Overweight"; }

   else if ( calbmi() < 35)
   { cout << "Obese Class I"; }

   else if ( calbmi() < 40 )
   { cout << "Obese Class II"; }
  
   else
   { cout << "Obese Class III";}
}























