
class ListNode {
public:
	int dane;
	ListNode* list;
	ListNode* pomoc;
	/**
	* @brief konstruktor klasy ListNode, ktory inicjalizuje pomocniczy wskaznik na nullptr
	*/
	ListNode();
	/**
	* @brief konstruktor klasy ListNode, inicjalizuje pole "dane" przekazana wartoscia
	* @param a pozwala na inicjalizacje pola "dane" z przekazana wartoscia
	*/
	ListNode(int a);
	/**
	* @brief destruktor klasy ListNode, ktory usuwa pomocniczy wskaznik
	*/
	~ListNode();
	/**
	* @brief metoda klasy ListNode, ktora zwraca wartosc pola "dane"
	*/
	int wypiszdane();
	/**
	* @brief metoda klasy ListNode, ktora zwraca wskaznik na nastepny element stosu
	*/
	ListNode* wypiszliste();
	/**
	* @brief metoda klasy ListNode, ustawia wartosc pola "dane" na przekazana wartosc
	* @param mojedane ustawienie wartosci pola "dane" na przekazana wartoœæ
	*/
	void zapiszdane(int mojedane);
	/**
	* @brief metoda klasy ListNode, ustawia wskaznik na nastepny element stosu na przekazany wskaznik
	* @param mojaListNode ustawienie wskaznika na nastepny element stosu na przekazany wskaznik
	*/
	void zapiszliste(ListNode* mojaListNode);
};