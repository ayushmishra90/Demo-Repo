#include <iostream>
using namespace std;

struct Complex
{

    float real;
    float imaginary;

    Complex(float x, float y)
    {
        real = x;
        imaginary = y;
    }
    Complex(float x)
    {
        real = x;
        imaginary = 0;
    }
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
};

Complex add(Complex fir, Complex sec)
{
    float y = fir.real + sec.real;
    float g = fir.imaginary + sec.imaginary;
    return Complex(y, g);
}

Complex sub(Complex fir, Complex sec)
{
    float y = fir.real - sec.real;
    float g = fir.imaginary - sec.imaginary;
    return Complex(y, g);
}

Complex mult(Complex fir, Complex sec)
{
    float y = (fir.real * sec.real) - (fir.imaginary * sec.imaginary);
    float g = (fir.imaginary * sec.real) + (fir.real * sec.imaginary);
    return Complex(y, g);
}

Complex div(Complex fir, Complex sec)
{
    float y = ((fir.real * sec.real) + (fir.imaginary * sec.imaginary)) / (sec.real * sec.real + sec.imaginary * sec.imaginary);
    float g = (fir.imaginary * sec.real - fir.real * sec.imaginary) / (sec.real * sec.real + sec.imaginary * sec.imaginary);
    return Complex(y, g);
}

int main()
{
    float a, b, c, d;
    char g;

    cin >> a;
    cin >> g;
    cin >> c >> d;

    Complex fir(a, b);
    Complex sec(c, d);

    switch (g)
    {
    case '+':
    {
        Complex t = add(fir, sec);
        cout << t.real << " " << t.imaginary;
        break;
    }
    case '-':
    {
        Complex m = sub(fir, sec);
        cout << m.real << " " << m.imaginary;
        break;
    }
    case '*':
    {
        Complex ml = mult(fir, sec);
        cout << ml.real << " " << ml.imaginary;
        break;
    }
    case '/':
    {
        Complex dd = div(fir, sec);
        cout << dd.real << " " << dd.imaginary;
        break;
    }
    default:
        cout << "Invalid input";
    }

    return 0;
}
