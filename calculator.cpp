#include <iostream>
 
bool is_valid(char action)
{
    return
        action == '*' ||
        action == '/';
}
 
int main(int argc, char **argv)
{
    if(argc == 1) { 
        std::cout << "Мультипликативный, который вычисляет * и / " << std::endl;
        return 0;
        }
    double x;
    std::cin >> x;
 
    char action;
    std::cin >> action;
 
    while (!is_valid(action))
    {
        std::cin >> action;
    }
 
    double y;
    std::cin >> y;
 
    double result;
    if (action == '*')
        result = x * y;
    else
        result = x / y;
 
    std::cout << " " << result;
}
