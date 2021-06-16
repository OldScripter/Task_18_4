#include <iostream>

void EvenDigits (long long number, int& ans)
{
    if (number == 0) return;

    int digit = number % 10;
    if (digit % 2 == 0) ans++;
    EvenDigits(number / 10, ans);
    return;
}

int main()
{
    int even_count = 0;
    long long number = 9223372036854775806;

    EvenDigits(number, even_count);

    std::cout << "Number " << number << " contains: \n";
    std::cout << even_count << " even digits\n";
    
    return 0;
}
