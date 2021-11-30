#include <iostream>
#include <cmath>
//В зависимости от значения у, возвращаем определённое значение
unsigned long long int F(unsigned long long int x, unsigned long long int y, unsigned long long int z) {
    if (y == 0) return 1;
    else if (y % 2)return x * F(x * x % z, y / 2, z) % z;
    else return F(x * x % z, y / 2, z);
}

int main() {
    unsigned long long int k, n, t, m, f, N = 1, l;
    std::cout << "Enter k, n, t: \nk = ";
    std::cin >> k;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "t = ";
    std::cin >> t;
    int* arr = new int[1];
    m = pow(10, t);
    l = k % m;
    //Ввод заканчивается при k=0, n=0
    while (k != 0 && n != 0) {
        if (N != 1) arr = (int*)realloc(arr, N * sizeof(int));
        arr[N - 1] = F(l, n, m);
        N++;
        std::cin >> k >> n >> t;
        m = pow(10, t);
        l = k % m;
    }

    for (int i = 0; i < N - 1; i++) {
        std::cout << std::endl << arr[i];
    }

    delete arr;

    return 0;
}
