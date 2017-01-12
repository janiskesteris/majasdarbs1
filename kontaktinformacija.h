#include <iostream>

using namespace std;

#ifndef KONTAKTINFORMACIJA_H_INCLUDED
#define KONTAKTINFORMACIJA_H_INCLUDED

class kontaktinformacija
{
  public:
    kontaktinformacija();

    kontaktinformacija(string, string, string, string, string, string, int, string, string, string, double, double, string, float);


        string getnosaukums();                //atgriez kompanijas nosaukumu
        string getvalsts();
        string getpilseta();
        string getnovads();
        string getpagasts();
        string getiela();
        int getmaja ();
        string getdzivoklis ();
        string getzip ();
        string getemail ();
        double gettelefons () const;            //shie ir metodes definejumi, sheit tev nav jadefine vini ka masivif bet pats fax, telefons un skype mainigie it jadefine ka masivi - piemers zemak
        double getfax () const;                 //bet tas nestrada, jo te ir konstante. es isti nesaprotu, ka savienot konstanti ar masivu
        string getskype () const;               //
        float getGPS_coordinates ();
        void displayGPS();


~kontaktinformacija();

        void setnosaukums(string);      //iestata kompanijas nosaukumu
        void setvalsts (string);
        void setpilseta(string);
        void setnovads(string);
        void setpagasts(string);
        void setiela(string);
        void setmaja (int);
        void setdzivoklis (string);
        void setzip (string);
        void setemail (string);
        void settelefons (double);
        void setfax (double);
        void setskype (string);
        void setGPS_coordinates (float);
        void addInfo();
        void displayContacts();

        //void displayGPS (/*float*/);

    private:
        string newnosaukums;
        string newvalsts;
        string newpilseta;
        string newnovads;
        string newpagasts;
        string newiela;
        int newmaja;
        string newdzivoklis;
        string newzip;
        string newemail;
        double newtelefons;
        double newfax[5]; //newfax tagad ir massivs ar pielaujamam 5 vertibam
        string newskype;
        float newGPS_coordinates;
};
#endif
