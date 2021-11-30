#include <iostream>
#include <cmath>
int nod(int n) {
	int sum = 0;
	for (n; n > 0; n--) {
		int k = n; //Переменная будет принимать значение наибольшего нечётного натурального делителя числа
        //При нахождении нужного k, k суммируется и цикл прекращается
		while (k > 0) {
			if (k % 2 != 0 && n % k == 0) {
				sum += k;
				break; 
			}
			k--;
		}
	}
	return sum;
}
int main()
{
	int N;
	long int n;
	std::cout << "Enter N (amount of lines) : \nN = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		n = rand() % 20;
		std::cout << "\n" << n << "\t=\t" << nod(n); //Значение данной функции будет выводиться после равно в соответствующей строке
	}
	return 0;
}