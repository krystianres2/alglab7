#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class lista {
private:
	list<int>liczby = { 1,4,9 };	
	 static const int n=4;
	int tab[n] = { 2,5,6,10 };
	
public:
	void wyswietl() {
		for (list<int>::iterator it = liczby.begin(); it != liczby.end(); it++) {
			cout << *it << ' ';
		}cout << endl;
	}
	void wstawianie() {
		for (int i = 0; i < n; i++) {
			for (list<int>::iterator it = liczby.begin(); it != liczby.end(); it++) {
				if (tab[i] <= *it) {
					liczby.insert(it, tab[i]);
					wyswietl();
					break;
				}

			}
			if (tab[i] > liczby.back()) {
				liczby.push_back(tab[i]);
				wyswietl();
			}
			//list<int>::iterator wsk = liczby.back();
			// const int& j = liczby, back();
		}
	}
	

};


int main()
{
	lista l1;
	l1.wstawianie();
	l1.wyswietl();


}

