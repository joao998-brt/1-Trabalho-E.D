#include <iostream>
using std::cout;
using std::cin;

int main()
{
    double a;
    double m;
    cout << "Qual a altura da pessoa?: ";
    cin >> a;
    cout << "Qual o peso da pessoa?: ";
    cin >> m;

    float imc = m / (a * a);

    double classesdeIMC(imc);
    {
        if (imc < 17)
    {
        cout <<"O IMC dessa pessoa é " << imc << "e ele está muito abaixo do peso";
    }

        else if (imc >= 17 && imc < 18.5)
    {
        cout << "O IMC dessa pessoa é " << imc << "e ele está abaixo do peso";
    }

        else if (imc >= 18.5 && imc < 25)
    {
        cout << "O IMC dessa pessoa é " << imc << "e ele está com peso normal ";
    }

        else if (imc >= 25 && imc < 30)
    {
        cout << "O IMC dessa pessoa é " << imc << "e ele está acima do peso ";
    }

        else if (imc >= 30 && imc < 35)
    {
        cout <<  "O IMC dessa pessoa é " << imc << "e ele está com obesidade ";
    }

        else if (imc >= 35 && imc < 40)
    {
        cout << "O IMC dessa pessoa é " << imc << "e ele está com obesidade severa ";
    }

        else if (imc <= 40)
    {
        cout << "O IMC dessa pessoa é " << imc << "e ele está com obesidade mórbida ";
    }
    }
   
    return 0;
}