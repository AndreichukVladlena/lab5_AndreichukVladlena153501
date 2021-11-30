#include <iostream>
//Создаёт и выводит массив с элементами arr[i][j] = 3 * i * j - 3
void A(int n, int** arr) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 3 * i * j - 3;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
}
//Создаёт и выводит массив с элементами arr[i][j] = 2 * i * j - 2
void B(int n, int** arr) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 2 * i * j - 2;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
}
int main()
{
	int N;
	std::cout << "Enter size : ";
	std::cin >> N;
	//Создаём два массива размерности N*N
	int** arr_1 = new int* [N];
	for (int i = 0; i < N; i++) arr_1[i] = new int[N];
	int** arr_2 = new int* [N];
	for (int i = 0; i < N; i++) arr_2[i] = new int[N];
	std::cout << "The 1st array : \n";
    A(N, arr_1);
	std::cout << "The 2nd array : \n";
	B(N, arr_2);
	return 0;
	delete[]arr_1;
	delete[]arr_2;
}
