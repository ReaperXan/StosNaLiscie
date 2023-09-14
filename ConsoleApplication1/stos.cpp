#include "stos.h"
stos::stos()
{
    this->pomoc = nullptr;
}
stos::~stos()
{
    delete this->pomoc;
}
void stos::wyswietl_stos()
{
    std::cout << "Zawartosc stosu: " << std::endl;
    ListNode* tymczasowa = new ListNode(dane);
    if (pomoc == nullptr)
    {
        std::cout << "Stos jest pusty" << std::endl;
    }
    else if (!tymczasowa)
    {
        std::cout << "Stos jest pelny" << std::endl;
    }
    else
    {
        tymczasowa = pomoc;
        while (tymczasowa!=nullptr)
        {
            std::cout<<tymczasowa->wypiszdane()<<std::endl;
            tymczasowa = tymczasowa->wypiszliste();
        }
    }
}
StosStatus stos::push()
{
    ListNode* tymczasowa = new ListNode(dane);
    if (!tymczasowa)
    {
        std::cout << "Stos jest pelny" << std::endl;
        return StosStatus::PELNY;
    }
    std::cout << "Jaki element chesz dodac do stosu" << std::endl;
    std::cin >> dane;
    tymczasowa->zapiszdane(dane);
    tymczasowa->zapiszliste(pomoc);
    pomoc = tymczasowa;
    return StosStatus::OK;
}
StosStatus stos::pop()
{
    ListNode* tymczasowa;
    if (pomoc == nullptr)
    {
        std::cout << "Stos jest pusty!!! " << std::endl;
        return StosStatus::PUSTY;
    }
    else
    {
        std::cout << "Element zostal usuniety ze stosu " << std::endl;
        tymczasowa = pomoc;
        pomoc = pomoc->wypiszliste();
        free(tymczasowa);
        return StosStatus::OK;
    }
}
void stos::size()
{
    int licznik = 0;
    ListNode* rozmiar = pomoc;
    while (rozmiar!=nullptr)
    {
        licznik++;
        rozmiar = rozmiar->wypiszliste();
    }
    std::cout <<"Rozmiar stosu jest rowny " << licznik << std::endl;
}
