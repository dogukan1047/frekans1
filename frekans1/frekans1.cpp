
#include <iostream>
using namespace std;
int main()
{
	
	//degerleri b�y�kten k�c�ge s�ralama
	/*
	int temp;
	int array[] = { 2,8,5,6,7,3,4,11,24 };




	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (array[j] <= array[i]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++) {

		cout << array[i] << endl;

	}
	*/

	//tekrar eden deger say�s�
	    int temp = 0;
	int kacadetsayigirilecek;
	cout << "Girilecek sayi adetini giriniz" << endl;
	cin >> kacadetsayigirilecek;
	int* array = new  int[100];

	for (int i = 0; i < kacadetsayigirilecek; i++)
	{
		cout << i + 1 << ".Sayiyi giriniz:" << endl;
		cin >> array[i];
		
	}
	for (int j = 0; j < kacadetsayigirilecek; j++) {
		for(int k=0;k<kacadetsayigirilecek;k++){
			if (array[j] == array[j + 1]) {
				temp++;
			
			}

		}
	}
	cout << temp;
}
