
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

	struct pracownik //struktura do przechowania info

    {
           std::string imie, nazwisko;
           double_t ocena;
           };
           
           //funkcja kto_lepszy porównuje dwóch pracowników
    bool kto_lepszy(pracownik a, pracownik b)

	{// gdy oceny różne zwraca true gdy pierwsza jest wyższa
	if (a.ocena != b.ocena)
		return (a.ocena > b.ocena);
	}	

		//program główny:
           
int main(int argc, char **argv)
{	
	int n = 5; //liczba pracowników
	//liczba struktur odpowiada liczbie pracowników
	pracownik a[n]; //skrót nazwy pracownik do a

	// pracownik 1
	a[0].imie = "Sylwester";
	a[0].nazwisko = "Bojanowski";
	a[0].ocena = 95.99;
	
	// pracownik 2
	a[1].imie = "Alek";
	a[1].nazwisko = "Abecki";
	a[1].ocena = 39.46;
	
	// pracownik 3
	a[2].imie = "Bartosz";
	a[2].nazwisko = "Babecki";
	a[2].ocena = 79.9;
	
	// pracownik 4
	a[3].imie = "Czesław";
	a[3].nazwisko = "Celecki";
	a[3].ocena = 57.9;
	
	// pracownik 5
	a[4].imie = "Donata";
	a[4].nazwisko = "Dębska";
	a[4].ocena = 57.9 ;

//wynik niesortowany	
	cout<<"wynik niesortowany"<<endl;
	cout<<"------------------"<<endl;
	for (int i = 0; i < n; i++) {
	cout<<a[i].imie<<" "<<a[i].nazwisko<<" "<<a[i].ocena<<endl;
}
	cout<<"------------------"<<endl;

//sortowanie	
		sort(a, a + n, kto_lepszy); //z użyciem funkcji porównującej 
		//kto_lepszy
//wyświetlanie wyników	
		cout<<"wynik sortowany"<<endl;
		cout<<"------------------"<<endl;
		for (int i = 0; i < n; i++) {
		cout<<a[i].imie<<" "<<a[i].nazwisko<<" "<<a[i].ocena<<endl;
}
		cout<<"------------------"<<endl;
		cout<<"wynik najwyższy"<<endl; //jest po sortowaniu na pozycji 0
		int k=0;
		cout<<a[k].imie<<" "<<a[k].nazwisko<<" "<<a[k].ocena<<endl;
		cout<<"------------------"<<endl; 
		cout<<"wynik najniższy"<<endl; //jest po sortowaniu na pozycji n
		cout<<a[n-1].imie<<" "<<a[n-1].nazwisko<<" "<<a[n-1].ocena<<endl;
	return 0;
}
