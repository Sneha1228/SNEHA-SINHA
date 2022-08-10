NAME - SNEHA SINHA
COLLEGE NAME - TECHNO INDIA UNIVERSITY
YEAR OF PASSING - 2022
MOBILE NUMBER - 7585005269


#include"bits/stdc++.h"
using namespace std;

class planet
{
private :
    string name;
    int moon;
    string gas;
   // int rings;
public :
    void get(string name1,int moon1,string gas);
    void show();


};

void planet :: get(string name1,int moon1,string gas1)
{
    strcpy(name,name1);
    moon = moon1;
    strcpy(gas,gas1);
}
void planet :: show()
{
    cout << "Name of planet " << name << endl;
    cout << "Total Number of moon is " << moon << endl;
    cout << " Gas " << gas << endl;
//    cout << "Ring " << rings << endl;
}
int main ()
{
    planet p;
    string name1,gas1;
    cout << "Planet Name " << endl;
    cin >> name1;
    cout << "Gas " << endl;
    cin >> gas1;
    int moon;
    cout << "Enter Number of moons " << endl;
    cin >> moon;
//    bool ring = false;

    p.get(name1,moon,gas1);
    p.show();
    return 0;
}
