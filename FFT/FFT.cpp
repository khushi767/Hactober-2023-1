#include <complex>
#include <iostream>
#include <vector>

const double PI = 3.141592653589793238460;

std::vector<std::complex<double>> fft(std::vector<std::complex<double>> a) {
    int n = a.size();
    if (n <= 1) {
        return a;
    }

    std::vector<std::complex<double>> a0(n / 2), a1(n / 2);
    for (int i = 0, j = 0; i < n; i += 2, ++j) {
        a0[j] = a[i];
        a1[j] = a[i + 1];
    }

    std::vector<std::complex<double>> y0 = fft(a0);
    std::vector<std::complex<double>> y1 = fft(a1);

    std::vector<std::complex<double>> y(n);
    for (int k = 0; k < n / 2; ++k) {
        std::complex<double> t = std::polar(1.0, -2.0 * PI * k / n) * y1[k];
        y[k] = y0[k] + t;
        y[k + n / 2] = y0[k] - t;
    }

    return y;
}

int main() {
    std::vector<std::complex<double>> a = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<std::complex<double>> result = fft(a);

    for (const std::complex<double>& val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}