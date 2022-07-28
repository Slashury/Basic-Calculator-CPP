#include <iostream>

int main()
{
    char op;
    float n1;
    float n2;
    float result;

    do{ 
       std::cout << "Enter a operator '+' '-' '*' '/': "; 
       std::cin >> op;
    } while(op != '+' &&op != '-' &&op != '*' &&op != '/');
    std::cout << "You choosed: " << op << "\n";

    std::cout << "Choose the first number: ";
    std::cin >> n1;
    std::cout << "Choose the second number: ";
    std::cin >> n2;


    switch (op)
    {
    case '+':
        result = n1 + n2;
        std::cout << "The result is: " << result;
        break;
    case '-':
        result = n1 - n2;
        std::cout << "The result is: " << result;
        break;
    case '*':
        result = n1 * n2;
        std::cout << "The result is: " << result;
        break;
    case '/':
        result = n1 / n2;
        std::cout << "The result is: " << result;
        break;
    }
    return 0;
}

