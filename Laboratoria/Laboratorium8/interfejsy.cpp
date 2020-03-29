#include <iostream>
#include <vector>

class IInstrument
{
public:
    virtual void WydajDzwiek() = 0;
    virtual ~IInstrument() {}
};

class Gitara : virtual public IInstrument
{
public:
    virtual void WydajDzwiek()
    {
        std::cout << "Gra gitara\n";
        std::cout << "Struny, struny ...\n";
    }
};

class Fortepian : virtual public IInstrument
{
public:
    virtual void WydajDzwiek()
    {
        std::cout << "Gra fortepian\n";
        std::cout << "Klawisze, klawisze ...\n";
    }
};

int main()
{
    Gitara gitara;
    Fortepian fortepian;
    std::vector<IInstrument*> instrumenty = {&gitara, &fortepian};
        
    for(auto instrument : instrumenty)
        instrument->WydajDzwiek();
}