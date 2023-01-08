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



void proyection()
{
    start:
    ::system("clear");
    int option = 0;
    cout<<"Which attribute you want?: \n";
    cout<<"1. RFC\n2. Name\n3.Last Name\n4. Salary\n5.Department\n6. Year Income\n\nYour option: "; cin>>option;
    cout<<endl;
    switch (option)
    {
        case 1:
            cout<<"RFC"<<endl;
            for (auto & i : employ)
            {
                cout<<i.rfc<<endl;
            }break;
        case 2:
            cout<<"Name"<<endl;
            for (auto & i : employ)
            {
                cout<<i.name<<endl;
            }break;

        case 3:
            cout<<"Last Name"<<endl;
            for (auto & i : employ)
            {
                cout<<i.last_name<<endl;
            }break;
        case 4:
            cout<<"Salary"<<endl;
            for (auto & i : employ)
            {
                cout<<i.salary<<endl;
            }break;
        case 5:
            cout<<"Department"<<endl;
            for (auto & i : employ)
            {
                cout<<i.dpt<<endl;
            }break;
        case 6:
            cout<<"Year Income"<<endl;
            for (auto & i : employ)
            {
                cout<<i.year_income<<endl;
            }break;
    }
    int option2 = 0;
    cout<<"Do you want other attribute 1. Yes, 2. No: "; cin>>option2;
    if (option2 == 1){ goto start;}

}

void menu()
{
    int option = 0;

    do
    {
        ::system("clear");
        cout<<"\t*******WELCOME*********\n";
        cout<<"1. Proyeccion"<<endl;
        cout<<"2. Seleccion"<<endl;
        cout<<"3. Producto Cruz"<<endl;
        cout<<"4. Union"<<endl;
        cout<<"5. Diferencia"<<endl;
        cout<<"6. Interseccion"<<endl;
        cout<<"7. Reunion"<<endl;
        cout<<"\n8. !!Exit!!"<<endl;

        cout<<"Your option here: "; cin>>option;
        switch (option) {
            case 1:
                proyection(); break;
            case 2:;
            case 3:;
            case 4:;
            case 5:;
            case 6:;
            case 7:;
            case 8:
                option = 8;
        }
    }
    while (option != 8);


}

int main()
{
    menu();

    return 0;
}