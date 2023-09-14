#include "stos.h"
#include <iostream>
int main()
{
    int wybor;
    stos sztos;
    do
    {
        std::cout << "-------------STOS-------------" << std::endl;
        std::cout << "Co chesz zrobic:" << std::endl;
        std::cout << "------------------------------" << std::endl;
        std::cout << "1.Poloz element na stosie " << std::endl;
        std::cout << "2.Zdejmij element ze stosu  " << std::endl;
        std::cout << "3.Wypisz zawartosc stosu " << std::endl;
        std::cout << "4.Informacja, ile elementow stos zawiera " << std::endl;
        std::cout << "5.Koniec programu " << std::endl;
        std::cout << "------------------------------" << std::endl;
        std::cout << "Wybor: ";
        std::cin >> wybor;
        system("cls");
        switch (wybor)
        {
        case 1:
            sztos.push();
            break;

        case 2:
            sztos.pop();
            break;

        case 3:
            sztos.wyswietl_stos();
            break;
        case 4:
            sztos.size();
            break;
        }
    }
        while (wybor !=5);
        return 0;
}


