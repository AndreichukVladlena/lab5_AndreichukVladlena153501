#include <iostream>
#include "stat_lib4.h";
void reverse(int N, int K, double** arr) {
	//Выводим массив, начиная с конца
	std::cout << "\n\nREVERSE ORDER : \n";
	for (int i = N - 1; i >= 0; i--) {
		for (int j = K - 1; j >= 0; j--) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
}
int main()
{
	int N, K;
	std::cout << "Enter N, K : \nN = ";
	std::cin >> N;
	std::cout << "K = ";
	std::cin >> K;
	double** arr = new double* [N];
	for (int i = 0; i < N; i++) arr[i] = new double[K];
	//Заполняем и выводим массив
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			arr[i][j] = double (rand() % 5 * pow(0.1, rand() % 5));
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	zero(N, K, arr); //Используем статическую библиотеку
	reverse(N, K, arr);
	delete[] arr;
	return 0;
}
