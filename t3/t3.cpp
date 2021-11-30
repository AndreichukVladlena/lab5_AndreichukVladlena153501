#include <iostream>
#include <cmath>
void newArr(int N, int K, int** arr) {
	int size = 0, k = 0, pr = 1;
	//Считаем количество чётных элементнов главной диагонали для определения размерности нового массива
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (i == j && arr[i][j] % 2 == 0) {
				size++;
			}
		}
	}
	int* newArr = new int[size];
	//Считаем произведение чётных элементов главной диагонали и заносим подходящие элементы в новый массив 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (i == j && arr[i][j] % 2 == 0) {
				newArr[k] = arr[i][j];
				pr=pr* newArr[k];
				k++;
			}
		}
	}
	std::cout << "\n\nNEW ARRAY : \n\n";
	for (int i = 0; i < size; i++) std::cout << newArr[i] << "\t";
	std::cout << "\n\nThe product of the elements of the new array : " << pr;
}
int main()
{
	int N, K;
	std::cout << "Enter N, K : \nN = ";
	std::cin >> N;
	std::cout << "K = ";
	std::cin >> K;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) arr[i] = new int[K];
	//Заполняем и выводим массив
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			std::cin >> arr[i][j];
		}
	}
	newArr(N, K, arr);
	delete[] arr;
	return 0;
}

