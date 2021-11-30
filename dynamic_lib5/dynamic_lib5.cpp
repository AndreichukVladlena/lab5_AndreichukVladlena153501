#include <iostream>
extern"C" _declspec(dllexport) void newArr(int N, int K, int** arr) {
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