#include <iostream>
int rec(int i) {
	if (i % 10 > 0) {
		return i % 10;
	}
	else if (i == 0) {
		return 0;
	}
	else {
		return rec(i / 10);
	}
}
int sum(int p, int q) {
	int sum = 0;
	for (int i = p; i <= q; i++) {
		sum += rec(i);
	}
	return sum;
}
int main()
{
	int p, q, N;
	std::cout << "Enter N (amount of lines) : \nN = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		//Домножаем на -1, так как значения послндней строки отрицательные, по условию
		if (i == N) {
			p = -1 * rand() % 20; q = -1 * rand() % 20;
			std::cout << "\n" << p << "\t" << q;
		}
		else {
			//Добиваемся неравенства p и q, так как p < q, по условию  
			do {
				p = rand() % 10; q = p + rand() % 10;
			} while (p == q);
			std::cout << "\n" << p << "\t" << q << "\t=\t" << sum(p, q); //Значение данной функции будет выводиться после равно в соответствующей строке
		}
	}
	return 0;
}
