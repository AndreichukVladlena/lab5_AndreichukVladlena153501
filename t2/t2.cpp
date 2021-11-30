#include <iostream>
#include <cmath>
int foo(int* arr, int nach_N, int kon_N, int part) {
	if (part > 2) return 0;
	int k = 0; //Эквивалентна количеству подходящих элементов в части массива
	for (int i = nach_N; i < kon_N; i++) {
		if (pow(arr[i], 3) > -10 && pow(arr[i], 3) < 20)	k++;
	}
	if (k == kon_N) {
		std::cout << "\nPart " << part << ": YES!!!";
	}
	else {
		std::cout << "\nPart " << part << ": NO!!!";
	}
	part++;
	return foo(arr, kon_N, 2 * kon_N, part++);
}

int main()
{
	int N;
	//Ввод чётной размерности массива
	do {
		std::cout << "Enter even size : ";
		std::cin >> N;
	} while (N % 2 != 0);
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << "\t";
	}
	foo(arr, 0, N / 2, 1);
	delete[]arr;
	return 0;
}