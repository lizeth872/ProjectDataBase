//
// Created by Axel Caballero on 05/01/23.
//

#include "iostream"
using namespace std;


struct Employers
        {
            char rfc[11];
            char name[30];
            char last_name[30];
            int salary;
            char dpt[3];
            int year_income;
        }employ[6] ={{"SACV750524", "Veronica", "Sanchez", 6000, "A1", 2004},
                      {"HEFC790926", "Carlos", "Hernandez", 8000, "A2", 2003},
                     {"ROPJ081001", "Jose", "Rojas", 10000, "A2", 2003},
                     {"ROA0740114", "Oscar", "Romero", 8000, "A1", 2002},
                     {"FORG760206", "German", "Flores", 12000, "A1", 2002},
                     {"PEVN780704", "Noe", "Perez", 15000, "A3", 2002}};

int main()
{
    cout<<"This is the database:\n";

    for (auto & i : employ)
    {
        cout<<i.name<<" "<<i.last_name<<" "<<i.salary<<" "<<i.dpt<<" "<<i.year_income<<endl;
    }


    return 0;
}