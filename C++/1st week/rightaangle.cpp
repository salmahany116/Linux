#include <iostream>
int main()
{
    int rows, d;
    std::cout << "\n\n Display the pattern like right angle triangle with right justified using digits:"<<std::endl;
  
    std::cout << " Input number of rows: ";
    std::cin >> rows;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= rows - i; j++) 
        {
            std::cout << " ";
        }
        d = i;
        for (int j = 1; j <= i; j++) 
        {
            std::cout << d;
            d--;
        }
        std::cout << std::endl;
    }
}