#include <iostream>

void Info(char a)
{
    std::cout << "Tutaj klasa " << a << "\n";
}

void Niszczenie(char a)
{
    std::cout << "Niszczymy obiekt typu " << a << "\n";
}

class A
{
public:
    void virtual Info()
    {
        ::Info('A');
    }
     ~A()
    {
        Niszczenie('A');
    }
};

class B : public A
{
public:
    void Info()
    {
        ::Info('B');
    }
    ~B()
    {
        Niszczenie('B');
    }
};

class C : public A
{
public:
    void Info()
    {
        ::Info('C');
    }
    ~C()
    {
        Niszczenie('C');
    }
};

void WyswietlInfo(A &a)
{
    a.Info();
}

int main()
{

    A a;
    B b;
    C c;

    a.Info();
    b.Info();
    c.Info();

    WyswietlInfo(a);
    WyswietlInfo(b);
    WyswietlInfo(c);

    std::cout << std::endl;

    A *wsk2 = new B();
    delete wsk2;
    
    B b_test;
    A *wsk = &b_test;

}