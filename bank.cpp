#include<iostream>
#include<math.h>

using namespace std ;

class Bank
{
private:
	int alap 	;
	int kamat 	;
	int ev 		;
public:
	Bank(int alap,int kamat, int ev) 	;
	Bank(const Bank& bank) 			;
	int hozam()				;
	int getAlap() 				;
	int getKamat() 				;
	int getEv() 				;	
};
Bank::Bank(int alap,int kamat, int ev)
{
	this->alap	 = alap ;
	this->kamat 	= kamat ;
	this->ev 	= ev 	;
}
Bank::Bank(const Bank& bank)
{
	alap	 = bank.alap 	;
	kamat 	= bank.kamat 	;
	ev 	= bank.ev 	;	
}
int Bank::hozam()
{
	double temp = alap * pow(((100+kamat)/100.0),ev) ;
	return temp ;
}
int Bank::getAlap()
{
	return alap ;
}
int Bank::getKamat()
{
	return kamat ;
}
int Bank::getEv()
{
	return ev ;
}
int main()
{
	Bank bank(100,5,1);
	cout << "Hozam:" << bank.hozam() << "Ft" << std::endl ;
	
}
