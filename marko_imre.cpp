#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    
    int menu;
    do{
    
    cout << "Izberite 1 da kupite srecko" << endl;
    cout << "Izberite 0 da zapustite igro" << endl;
    cin >> menu;

    int polje1[48];
    int user[48];
    int counter = 0;
    
    if(menu==0)
        break;
    
    if(menu==1){
    for(int i=0; i<=6; i++)
    {
        polje1[i] = (rand()%48);
    }
    cout << "Vnesite 6 kombinacij od 1-48, ter eno dodatno!" << endl;
    for (int x = 0; x<=6; x++)
    {
        cin >> user[x];
        if (user[x] >= 49)
        {
            cout << "Stevilka kombinacije je prevelika" << endl;
            break;
        }
    }
       
    for(int i=0;i<=7;i++)
    {
        if(polje1[i] != user[i])
        {
            counter++;
        }
    }
    
    if (counter == 0 )
    {
        cout << "Zmagali ste na lotu" << endl;
        
    }
    
    else
    {
        cout << "Vec sreèe prihodnjic" << endl;
    }
    
    }
        cout <<"Kombinacije so bile:" << endl;
        for(int i=0; i<=6; i++)
        {
            cout << polje1[i] << endl;
        }
    }while(menu!=0);


    return 0;
}
