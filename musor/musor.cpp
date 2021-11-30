#include <iostream>
void newArr(int N, int K, int** arr) {
	int size = 0, sum = 0, k = 0;
	//Считаем количество нечётных элементов чётных столбцов для определения размерности нового массива
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (j % 2 == 0 && arr[i][j] % 2 != 0) {
				size++;
			}
		}
	}
	int* newArr = new int[size];
	//Заносим подходящие элементы в новый массив 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (j % 2 == 0 && arr[i][j] % 2 != 0) {
				newArr[k] = arr[i][j];
				sum += newArr[k]; //Подсчёт суммы элементов нового массива
				k++;
			}
		}
	}
	std::cout << "\n\nNEW ARRAY : \n\n";
	for (int i = 0; i < size; i++) std::cout << newArr[i] << "\t";
	std::cout << "\n\nAirthmetical mean : " << sum / size; //Находим и выводим среднее арифметическое
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

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			arr[i][j] = rand() % 20;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	newArr(N, K, arr); 
	delete[] arr;
	return 0;
}