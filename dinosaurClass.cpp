// dinosaurs.cpp
// Tom Bielawski
// 04/01/2020
// General dinosaur superclass with TRex and Triceratops subclasses


#include <iostream>
#include <iomanip>
using namespace std;

class Dinosaur
{
    private:
        string name;
        bool carnivore;
        const static string superOrder;
		
    public:
        Dinosaur() 
		{
            this->name = "noname";
            this->carnivore = false;
        }
		
        Dinosaur(string name, bool carnivore) 
		{
            this->name = name;
            this->carnivore = carnivore;
        }

        ~Dinosaur() {}

        string getSuperOrder() const 
		{
            return superOrder;
        }

        string getName() const 
		{
            return this->name;
        }

        bool isCarnivore() const 
		{
            return this->carnivore;
        }

        void setName(string name) 
		{
            this->name = name;
        }

        void setCarnivore(bool carnivore) 
		{
            this->carnivore = carnivore;
        }
};

const string Dinosaur::superOrder = "Dinosauria";

// TRex represents a Tyrannosauraus  Rex
class TRex : public Dinosaur
{
    private:
        double toothSize; // inches

    public:

        TRex() : Dinosaur("", true)  
		{
            this->toothSize = 0.0;
        }

        TRex(string name, double toothSize) : Dinosaur(name, true) 
		{
            this->toothSize = toothSize;
        }
        
		~TRex() {}

        double getToothSize() const 
		{
            return this->toothSize;
        }

        void setToothSize(double toothSize) 
		{
            this->toothSize = toothSize;
        }

        void print() 
		{
            cout << fixed << setprecision(2);
            cout << this->getName() << ", " <<
			"(superorder " << this->getSuperOrder() << "), " <<
			(this->isCarnivore() ? "eats meat" : "does not eat meat") <<
			", tooth size = " << this->getToothSize() << endl;
        }
};

//Triceratops, a subclass of Dinosaur
class Triceratops : public Dinosaur
{
private:
		//private double member variable
		double hornSize;
	
	public:
	
		//0-arg constructor with empty string 
		Triceratops() : Dinosaur("", false)
		{
			this->hornSize = 0.0;
		}
		//2-arg constructo,r string "name"and double "hornSize" parameters
		Triceratops(string name, double hornSize) : Dinosaur(name, false) 
		{
			this->hornSize = hornSize;
		}
		//destructor
		~Triceratops() {}
		
		//Accessor
		double getHornSize() const 
		{
			return this->hornSize;
        }
		
		//Mutator
        void setHornSize(double hornSize) 
		{
            this->hornSize = hornSize; 
        }
		
		//Print function to print characteristics.
		void print() 
		{
            cout << fixed << setprecision(2);
            cout << this->getName() << ", " <<
			"(superorder " << this->getSuperOrder() << "), " <<
			(this->isCarnivore() ? "eats meat" : "does not eat meat") <<
			", horn size = " << this->getHornSize() << endl;
        }
};

int main()
{
	// create 2 TRex Dinosaurs (allocate from heap)
    TRex *tr1 = new TRex("Tyrannosaurus Laramidia", 2.0);
    tr1->print();

    TRex *tr2 = new TRex("Tyrannosaurus Asia", 3.0);
    tr2->print();
	
	//Creates two Triceratops Dinosaurs
	Triceratops *tri1 = new Triceratops("T. horridus", 5.0);
    tri1->print(); 
	
	Triceratops *tri2 = new Triceratops("T.  prorsus", 6.0 );
    tri2->print();
	

    // tr1->fight(tr2); // no, but it would be awesome!

    delete tr1; // asteroid!
    delete tr2;
	
	//Deleting the Triceratops
	delete tri1;
	delete tri2;

    return 0;
}