#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // kimaradt egy _ jel
    std::cout << '1-100 ertekek duplazasa' // id�z�jel rossz
        for (int i = 0;) //for ciklus hi�nyos
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) // nincs kik�t�s
    {
        std::cout << "Ertek:" // nincs ki�rt �rt�k
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // �tlagnak hi�nyzik az �rt�kad�s
    for (int i = 0; i < N_ELEMENTS, i++) // for ciklusban , helyett ; jel kellene
    {
        atlag += b[i] // elmaradt egy ; jel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
