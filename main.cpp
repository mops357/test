#include <iostream>
#include <vector>
using namespace std;

int main()
{
            /**
        1. ������ ��� ������� ������ +
        2. ������� ������ �� ����� +
        3. �������  �� ��� �����+
        4. ����� ���������� �����
        5. ������� ���������� �����
        **/
    int kol_chisel;
    cin >> kol_chisel;
    vector<int> chislo(kol_chisel);
    for (int i = 0; i < kol_chisel; i++){
        cin >> chislo[i];
        }
    for (int i = 0; i < kol_chisel; i++){
        for (int j = i+1; j < kol_chisel; j++){
            for (int z = j+1; z < kol_chisel; z++){
                if((chislo[i]!=chislo[j]) && (chislo[i]!=chislo[z])){
                    cout << chislo[i] << chislo[j] << chislo[z] << " ";
            }
        };
    }
    }


}
