#include <iostream>

double power(double x, int n);
void printStars(int = 10, char = '*');


int main()
{

    double result = power(5.5, 4) + power(7.2, 5) * power(8.1, 3);
    
    int n = 20;
    printStars();
    printStars(20);
    printStars(30, '-');
    std::cout << n;

    

    /*
    std::cout << "result = " << result << "\n";
    printStars();
    */
    return 0;
}

double power(double x, int n)
{
    double power{ 1 };
    for (int i = 0; i < n; i++)
        power *= x;

    return power;
}

void printStars(int size, char symbol)
{
    for (int i = 0; i < size; i++)
        std::cout << symbol;
    std::cout << "\n";
    size = 100;
}

