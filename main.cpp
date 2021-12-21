#include <iostream>
#include <vector>
using namespace std;

int main()
{
            /**
        1. Ввести все входные данные +
        2. Вывести данные на экран +
        3. Вывести  по три числа+
        4. Вывод подходящих троек +
        5. подсчет подходящей тройки
        **/
    int kol_chisel;
    int minim = 9999999999999;
    int vivod;
    cin >> kol_chisel;
    vector<int> chislo(kol_chisel);
    for (int i = 0; i < kol_chisel; i++){
        cin >> chislo[i];
        }
    for (int i = 0; i < kol_chisel; i++){
        for (int j = i+1; j < kol_chisel; j++){
            for (int z = j+1; z < kol_chisel; z++){
                if((chislo[i]!=chislo[j]) && (chislo[i]!=chislo[z]) && (chislo[j]!=chislo[z]) ){
                    if(((chislo[i]+chislo[j]+chislo[z]) % 4 == 0 ) && ((chislo[i]+chislo[j]+chislo[z])<minim)){
                        minim = (chislo[i]+chislo[j]+chislo[z]);
                        cout << chislo[i] << chislo[j] << chislo[z] << endl;

                    }
            }
        };
    }
    }

    //cout << vivod;
}
