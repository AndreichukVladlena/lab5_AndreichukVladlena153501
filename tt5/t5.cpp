#include <iostream>
#include <windows.h>
int main()
{
	//Подключение динамической библиотеки
	HINSTANCE load;
	load = LoadLibrary(L"dynamic_lib5.dll");
	typedef void (*NewArr)(int, int, int**);
	NewArr newArr;
	newArr = (NewArr)GetProcAddress(load, "newArr");
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
			arr[i][j] = rand() % 20;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	newArr(N, K, arr);
	FreeLibrary(load);
	delete[] arr;
	return 0;
}