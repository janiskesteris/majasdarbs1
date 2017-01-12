#include <iostream>
#include <string>
#include "kontaktinformacija.h"

using namespace std;

void addInfo();
void displayContacts();
void displayInfo();
void displayGPS();

int main()
{
    int izvelne;
    cout << "Ko Jus veletos darit?" << endl;
    cout << "Izdariet izveli -\n1. Pievienot info\n2. Apskatit kontaktu skaitu\n3. Attalums starp koordinatam\n" << endl;
    cin >> izvelne;

    switch (izvelne)
    {
    case 1 :
        addInfo();
        break;
    case 2:
        displayContacts();
        break;
    case 3:
        displayGPS();
        break;
    default:
        cout << "Nepareiza izvelne. Ludzu izvelieties 1., 2. vai 3." << endl;
        break;
    }

    return 0;

}


