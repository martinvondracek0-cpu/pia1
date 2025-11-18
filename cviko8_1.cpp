#include <iostream>
#include <cmath>
#include <vector>
#include <string>

class Tvar
{
    // veřejně přístupné fce z mainu
    public:
        Tvar() {};
        virtual ~Tvar() {};
        virtual float obvod() = 0;
        virtual float obsah() = 0;
        virtual std::string jmeno() = 0;
};

// class Kruh odvozena z tvaru
class Kruh : public Tvar
{
    private:    
        const float pi = 3.141592653589793239;
        float radius = 5;
    
    public:
        // fce na spočtení obvodu Kruhu
        float obvod() override
        {
            float hodnotaObvodu = 2 * pi * radius;
            std::cout << "Spočtený obvod je: " << hodnotaObvodu << std::endl;
            return 0;
        };
        
        
        // fce na spočtení obsahu Kruhu
        float obsah() override
        {
            float hodnotaObsahu = pi * std::pow(radius, 2);
            std::cout << "Spočtená plocha je: " << hodnotaObsahu << std::endl;
            return 0;
        }

        // fce jména
        std::string jmeno() override
        {
            return "Spočtený obrazec byl kruh";
        }
};

// class Ctverec odvozena z tvaru
class Ctverec : public Tvar
{
    private:
        float strana = 5;

    public:
        // fce na spočtení obvodu Ctverce
        float obvod() override
        {
            float hodnotaObvodu = 4 * strana;
            std::cout << "Spočtený obvod je: " << hodnotaObvodu << std::endl;
            return 0;
        }

        // fce na spočtení obsahu Ctverce
        float obsah() override
        {
            float hodnotaObsahu = std::pow(strana, 2);
            std::cout << "Spočtený obsah je: " << hodnotaObsahu << std::endl;
            return 0;
        }

        // fce jména
        std::string jmeno() override
        {
            return "Spočtený obrazec byl čtverec";
        }
};

// main část
int main()
{
   
    // obvod Kruhu
    Kruh* obvodKruhu = new Kruh();
    std::cout << obvodKruhu->obvod() << std::endl;

    // obsah Kruhu
    Kruh* obsahKruhu = new Kruh();
    std::cout << obsahKruhu->obsah() << std::endl;

    // jmeno Kruhu
    Kruh* jmenoKruhu = new Kruh();
    std::cout << jmenoKruhu->jmeno() << std::endl;

    // obvod Ctverce
    Ctverec* obvodCtverce = new Ctverec();
    std::cout << obvodCtverce->obvod() << std::endl;

    // obsah Ctverce
    Ctverec* obsahCtverce = new Ctverec();
    std::cout << obsahCtverce->obsah() << std::endl;

    // jmeno Ctverce
    Ctverec* jmenoCtverce = new Ctverec();
    std::cout << jmenoCtverce->jmeno() << std::endl;

    return 0;
};

// když z fcí v subclasse uděláš voidy, nebude to vracet nic, ale zase to pak neni asi praktický
// pokud chceš s těma outputama těch fcí nějak dál číselně pracovat