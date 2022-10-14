#include <iostream>
#include <string>
#include <sstream>

int main()
{
    double a, b, result;
    char operation;
    std::string buffer;
    std::cout << "Enter your expression:\n";
    std::cin >> buffer;
    std::stringstream buffer_stream (buffer);
    buffer_stream >> a >> operation >> b;

    if (operation == '+')
    {
        result = a + b;
    }
    else if (operation == '-')
    {
        result = a - b;
    }
    else if (operation == '/')
    {
        result = a / b;
    }
    else if (operation == '*')
    {
        result = a * b;
    }
    else
        std::cerr << "Wrong operation!" << std::endl;
    std::cout << result << std::endl;
}