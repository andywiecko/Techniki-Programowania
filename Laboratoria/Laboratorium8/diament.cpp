#include <iostream>

void Info(char a)
{
    std::cout << "Pracuje konstruktor " << a << "\n";
}

class A
{
public:
    A()
    {
        Info('A');
    }
};

class B : virtual A
{
public:
    B()
    {
        Info('B');
    }
};

class C : virtual A
{
public:
    C()
    {
        Info('C');
    }
};

class D : B, C
{
public:
    D()
    {
        Info('D');
    }
};

int main()
{

    D d;
}