#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

void demo_lista();

list<char>::iterator ListSearch(list<char>& lista, char znak);
void MergeLists(list<int>& L1, list<int>& L2, list<int>& L3);
bool deleteNode(list<char>& lista, int);
void createSortedList(list<int>&, int[], int);

int main() {

	// demo_lista();   
	list<char> lista{ 'a','l','f','c' };

	list<char>::iterator it = ListSearch(lista, 'f');
	if (it == lista.end())
	{ cout << "Nie znaleziono ";
	}
	else {
		cout << *it;
		cout << deleteNode(lista, 3);
	}
	for (char a : lista)
		cout << a << ' ';
	cout << endl;
}



void demo_lista() {
	auto print_char = [](const char& n) { cout << n << ' '; };

	list<char> lista{ 'a','l','f','c' };
	for_each(lista.begin(), lista.end(), print_char); cout << endl;
	for_each(lista.rbegin(), lista.rend(), print_char);

	lista.clear();

	char znak;
	cout << "\nPodaj znaki (Enter, Ctrl-z): ";
	while (cin >> znak)
		lista.push_back(znak);  //lista.push_front(znak); 

	list<char>::iterator it;
	for (it = lista.begin(); it != lista.end(); it++) {
		lista.insert(it, 'x');
	}

	for_each(lista.begin(), lista.end(), print_char); cout << endl;

	for (it = lista.begin(); it != lista.end(); ) {
		if (*it == 'x')
			it = lista.erase(it);
		else it++;
	}

	// char& a = lista.back();
   // a = 'x';

	/*list<char>::iterator it;
	  for (it = lista.begin(); it != lista.end(); it++)
	   cout << *it << ' ';
	*/
	for (char a : lista) {
		cout << a << ' ';
		cout << endl;
	}
}

list<char>::iterator ListSearch(list<char>& lista, char znak) {
	list<char>::iterator it;

	for (it = lista.begin(); it != lista.end(); it++) {
		if (*it == znak) return it;
	}


	return it;
}
bool deleteNode(list<char>& lista, int numer) {
	if (lista.size() < numer || numer < 1) return false;
	list<char>::iterator it;
	int i = 1;
	for (it = lista.begin(); i < numer; it++, i++);
	lista.erase(it);
	return true;
}
void createSortedList(list<int>& lista, int tab1[], int roz) {
	for (int i = 0; i < roz; i++) {
		list<int>::iterator it = lista.begin();
		while (lista.end() != it) {
			if (tab1[i] < *it) {
				lista.insert(it, tab1[i]);
					break;
			}
			it++;
		}
		//list<int>::iterator it = lista.rbegin();
		//if(tab1[i]>*it){
			//lista.insert(it, tab1[i]);
			//break;
		if (tab1[i] > lista.back()) {
			lista.push_back(tab1[i]);
		}
	}


}