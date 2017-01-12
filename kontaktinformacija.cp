#include "kontaktinformacija.h"
#include <cmath>


kontaktinformacija::kontaktinformacija(string nosaukums, string valsts, string pilseta, string novads, string pagasts, string iela, int maja, string dzivoklis, string zip, string email, double telefons, double fax, string skype, float GPS_coordinates)
{
    newnosaukums = nosaukums;
    newvalsts = valsts;
    newpilseta = pilseta;
    newnovads = novads;
    newpagasts = pagasts;
    newiela = iela;
    newmaja = maja;
    newdzivoklis = dzivoklis;
    newzip = zip;
    newemail = email;
    newtelefons = telefons;
    newfax = fax;
    newskype = skype;
    newGPS_coordinates = GPS_coordinates;
}

kontaktinformacija::~kontaktinformacija(){}

 string kontaktinformacija::getnosaukums() {
 return newnosaukums;
 }

string kontaktinformacija::getvalsts(){
return newvalsts;
}

string kontaktinformacija::getnovads(){
return newnovads;
}

string kontaktinformacija::getpilseta(){
return newpilseta;
}

 string kontaktinformacija::getpagasts(){
 return newpagasts;
 }

string kontaktinformacija::getiela(){
return newiela;
}

int kontaktinformacija::getmaja(){
return newmaja;
}

string kontaktinformacija::getdzivoklis(){
 return newdzivoklis;
 }

string kontaktinformacija::getzip(){
return newzip;
}

string kontaktinformacija::getemail(){
return newemail;
}

 double kontaktinformacija::gettelefons() const{
 return newtelefons;
 }

double kontaktinformacija::getfax() const{
return newfax;
}

string kontaktinformacija::getskype() const{
return newskype;
}
float kontaktinformacija::getGPS_coordinates(){
return newGPS_coordinates;
}


void kontaktinformacija::setnosaukums(string nosaukums)
{
    newnosaukums = nosaukums;
}
void kontaktinformacija::setvalsts(string valsts)
{
    newvalsts = valsts;
}
void kontaktinformacija::setpilseta(string pilseta)
{
    newpilseta = pilseta;
}
void kontaktinformacija::setnovads(string novads)
{
    newnovads = novads;
}
void kontaktinformacija::setpagasts(string pagasts)
{
    newpagasts = pagasts;
}
void kontaktinformacija::setiela(string iela)
{
    newiela = iela;
}
void kontaktinformacija::setmaja(int maja)
{
    newmaja = maja;
}
void kontaktinformacija::setdzivoklis(string dzivoklis)
{
    newdzivoklis = dzivoklis;
}
void kontaktinformacija::setzip(string zip)
{
    newzip = zip;
}void kontaktinformacija::setemail(string email)
{
    newpagasts = email;
}
void kontaktinformacija::settelefons(double telefons)
{
    newiela = telefons;
}
void kontaktinformacija::setfax(double fax)
{
    newfax = fax;
}
void kontaktinformacija::setskype(string skype)
{
    newskype = skype;
}
void kontaktinformacija::setGPS_coordinates(float GPS_coordinates)
{
    newGPS_coordinates = GPS_coordinates;
}

void kontaktinformacija::addInfo()              //ja es rakstu "void kontaktinformacija::addInfo()", man dod error "Id returned 1 exit status"
{                           //ja es saprotu pareizi, funkcijai vajadzetu nemt variables no klases kontaktinformacija, bet
    string nosaukums;       //tas nenotiek, tapec es uztaisiju workarount un defineju variables seit
	string valsts;
	string pilseta;
	string novads;
	string pagasts;
	string iela;
	int maja;
	string dzivoklis;
	string zip;
	string email;
	double telefons;                        //siem vajadzetu b�t mas�viem, k� to izdar�t?
    double fax;
    string skype;
	float GPS_coordinates;
	//kontaktinformacija kompanija2;             // https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm
cout << "Ievadiet nosaukumu \n";
cin >> nosaukums;
cout << "Ievadiet valsti \n";
cin >> valsts;
cout << "Ievadiet pilsetu \n";
cin >> pilseta;
cout << "Ievadiet novadu \n";
cin >> novads;
cout << "Ievadiet pagastu \n";
cin >> pagasts;
cout << "Ievadiet ielu \n";
cin >> iela;
cout << "Ievadiet majas numuru \n";
cin >> maja;
cout << "Ievadiet dzivokla numuru \n";
cin >> dzivoklis;
cout << "Ievadiet pasta indeksu \n";
cin >> zip;
cout << "Ievadiet epasta adreses \n";
cin >> email;
cout << "Ievadiet telefona numurus \n";
cin >> telefons;
cout << "Ievadiet faksa numurus \n";
cin >> fax;
cout << "Ievadiet skype adresi \n";
cin >> skype;
cout << "GPS_coordinates \n";
cin >> GPS_coordinates;

kontaktinformacija kompanija1 (nosaukums, valsts, pilseta, novads, pagasts, iela, maja, dzivoklis, zip, email, telefons, fax, skype, GPS_coordinates);
//ja es so objektu rakstu funkcijas sakuma, vins man pie telefona, faksa, skype druka atminas apgabalu adreses

  cout << endl << "Kompanijas nosaukums: \n" << kompanija1.getnosaukums() << endl <<
"Valsts: " << kompanija1.getvalsts() << endl <<
"Pilseta: " << kompanija1.getpilseta() << endl <<
"Novads: " << kompanija1.getnovads() << endl <<
"Pagasts: " << kompanija1.getpagasts() << endl <<
"Iela: " << kompanija1.getiela() << endl <<
"Maja: " << kompanija1.getmaja() << endl <<
"Dzivoklis: " << kompanija1.getdzivoklis() << endl <<
"Pasta indekss: " << kompanija1.getzip() << endl <<
"Epasts: " << kompanija1.getemail() << endl <<
"Telefons: " << kompanija1.gettelefons() << endl <<
"Fax: " << kompanija1.getfax() << endl <<
"Skype: " << kompanija1.getskype() << endl <<
"GPS: " << kompanija1.getGPS_coordinates() << endl;

//vai es varu seit rakstit object2 tapat ka kompanija 1?                https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm
//kontaktinformacija kompanija2 (nosaukums, valsts, pilseta, novads, pagasts, iela, maja, dzivoklis, zip, email, telefons, fax, skype, GPS_coordinates);                            //k� var izveidot n�kamo object?

void displayContacts();
}

void displayContacts()
{
   //kontaktinformacija kompanija1;
 //cout << &kompanija1.getemail << endl;*/                      https://www.tutorialspoint.com/cplusplus/cpp_this_pointer.htm
 //return this->email < kompanija1.getemail;                    //k� es varu izvilkt skaitu faksiem un telefoniem, kas pievienoti no user?
    cout << "Kontaktu skaits: " << endl;
    return;
}

void displayGPS(/*float GPS_coordinates*/)                      //ari tas pats, kas ar void addinfo() - ja es pievienoju kontaktinformacija::displayGPS, man rada error
{
 float x1, x2, y1, y2;
 //double attalums;
//float GPS_coordinates =
  cout << "Ievadiet savas koordinatas, katru atdalot ar atstarpi: ";
  cin >> x1 >> y1;

  cout << "Ievadiet merka koordinatas, katru atdalot ar atstarpi: ";
  cin >> x2 >> y2;

  int distancex = (x2 - x1) * (x2 - x1);
  int distancey = (y2 - y1) * (y2 - y1);

  double attalums = sqrt(distancex - distancey);


cout << "Attalums starp jums un kompaniju ir: " << attalums << "km" << endl;

}

