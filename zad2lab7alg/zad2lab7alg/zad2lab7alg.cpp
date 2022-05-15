#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
class Lista {
private:
	list<int>liczby = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
public:
	void liczba() {
		cout << "Ktora liczba chcesz usunac: " << endl;
		cin >> n;
	}
	void usuwanie(){
		for (list<int>::iterator it = liczby.begin(); it != liczby.end(); it++) {
			if (*it == n) {
				it = liczby.erase(it);
				break;
			}
		}cout << endl;
	}
	void wypisywanie() {
		for (list<int>::iterator it = liczby.begin(); it != liczby.end(); it++) {
			cout << *it << endl;
    }
	}
};

int main()
{
	Lista l1;
	l1.liczba();
	l1.usuwanie();
	l1.wypisywanie();





}

