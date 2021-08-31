

#include <iostream>
#include "GameEngine.h"

using namespace std;
int main()
{
	cout << "Witamy w grze Angry Pigs!" << endl;
	cout << "Gra sklada sie z 10 poziomow, w ktorych Twoim zadaniem jest pokonanie coraz to wiekszej liczby przeciwnikow." << endl;
	cout << "Aby to zrobic nalezy wybrac postac atakujaca oraz jej cel(UWAGA!!! Wybranie martwej postaci lub celu ktory juz nie istnieje poskutkuje utrata tury)." << endl;
	cout << "Obrazenia zadawane rowne sa mocy ataku postaci atakujacej." << endl;
	cout << "Dodatkowo podczas ataku mozna uzyc umiejetnosci zadajacej 15 obrazen, umiejetnosc ta zuzywa 10 many." << endl;
	cout << "Po Twoim ataku jeden z Twoich ptakow otrzymuje 10 punktow obrazen" << endl;
	cout << "Statystyki Twoich ptakow przenszone sa na nastepne poziomy! Wiec madrze zarzadzaj zasobami" << endl;
	cout << "Gdy zdrowie ptaka osiagnie 0 nie mozna nim juz atakowac, jednak moze on przyjmowac obrazenia" << endl;
	cout << "Po kazdym pokonanym poziomie postacie osiagaja wyzszy poziom oraz podnoszone sa losowo ich statystyki" << endl;
	cout << "Rozgrywka dobiega konca gdy pokonasz wszystkie poziomy lub wszystkie Twoje ptaki beda martwe. Milej zabawy!" << endl;
	cout << "Aby kontynuuowac wcisnij dowolny klawisz";
	getchar();
	system("CLS");
	GameEngine engine;
	engine.RunGame();
	
}

