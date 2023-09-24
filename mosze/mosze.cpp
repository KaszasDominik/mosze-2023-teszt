#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // kimaradt egy _ jel
    std::cout << '1-100 ertekek duplazasa' // idézõjel rossz
        for (int i = 0;) //for ciklus hiányos
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) // nincs kikötés
    {
        std::cout << "Ertek:" // nincs kiírt érték
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // átlagnak hiányzik az értékadás
    for (int i = 0; i < N_ELEMENTS, i++) // for ciklusban , helyett ; jel kellene
    {
        atlag += b[i] // elmaradt egy ; jel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
