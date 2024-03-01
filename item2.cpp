#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int ano;
    cout << "digite o ano desejado: ";
    cin >> ano;

    if (ano %4 == 0 && ano %100 != 100 || ( ano %400 == 0) ) 
    {
        cout << "o ano que você falou é bissexto!!";
    }
    else
    {
        cout << "o ano que você falou não é bissexto :(";
    }
    

    return 0;
}