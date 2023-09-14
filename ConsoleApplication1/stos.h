#pragma once
#include <iostream>
#include "lista.h"
#include "stosstaus.h"
class stos :public ListNode 
{
public:
	/**
	* @brief konstruktor klasy stos, ktory inicjalizuje pomocniczy wskaznik na nullptr
	*/
	stos();
	/**
	* @brief destruktor klasy stos, ktory usuwa pomocniczy wskaznik
	*/
	~stos();
	/**
	* @brief metoda klasy stos, ktora wyswietla zawartosc stosu
	*/
	void wyswietl_stos();
	/**
	* @brief metoda klasy stos, ktora dodaje element do stosu
	*/
	StosStatus push();
	/**
	* @brief metoda klasy stos, ktora usuwa element z gornej czesci stosu
	*/
	StosStatus pop();
	/**
	* @brief metoda klasy stos, ktora wyswietla rozmiar stosu
	*/
	void size();
};