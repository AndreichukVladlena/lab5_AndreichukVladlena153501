#include "stat_lib4.h"
#include <iostream>
void zero(int n, int k, double** arr) {
	int amount = 0; //переменная для подсчёта количества нулей
	//ищем нули и выводим их индексы 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if (arr[i][j] == 0) {
				amount++;
				std::cout << "\n\nzero " << amount << "\nline number : " << i << "\ncolumn number : " << j;

			}
		}
	}
	std::cout << "\n\namount of zeros : " << amount << "\n";
}
