//invertebrates.cpp
//Tom Bielawski
//
//invertebrate animal classes



#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

#include "invertebrates.h"

//default constructor with default values
Invertebrate::Invertebrate()
{
	this->name = "none"; 
	this->numLegs = 0;
	this->skeletonType = NONE;
}

Invertebrate::Invertebrate(string name, int numLegs, Skeleton_Type skeletonType)
{
	this->name =  name;
	this->numLegs =  numLegs;
	this->skeletonType =  skeletonType;
}

//Number Legs accessor
int Invertebrate::getNumLegs() const
{
    return this->numLegs;
}

//Number Legs mutator
 void Invertebrate::setNumLegs(int numLegs)
{
	this->numLegs = numLegs;
}

//Get Name accessor
string Invertebrate::getName() const
{
    return this-> name;
}

//Get Name mutator
void Invertebrate::setName(const string name)
{
	this->name = name;
}

//Skeleton Type accessor
Skeleton_Type Invertebrate::getSkeletonType() const
{
	return this->skeletonType;
}

//Skeleton Type mutator
void Invertebrate::setSkeletonType(const Skeleton_Type skeletonType)
{
	this->skeletonType = skeletonType;
}
  

//Copy constructor--copied format from the dinosaur project
//I commented this out, and the print method, to focus on one error at a time.
Spider::Spider(const Spider &obj) : Invertebrate(obj.getName(), EXOSKELETON, 8){}
Spider& Spider::operator =(const Spider &obj)
{
	this->getName();
	this->getSkeletonType();
	this->getNumLegs();
	return this->;
}
/*virtual void spider::print()
{
	cout << fixed << setprecision(2);
	cout << Invertebrate::getName() << ", " <<"Number of Legs ="
			<< Invertebrate::getNumLegs() << ", " << "Skeleton Type ="
			<< Invertebrate::getSkeletonType() << endl;
}*/

int main()
{
    Spider *sp = new Spider("Brown Recluse"); 
	cout << sp << endl;
    sp->print();

    Spider sp2("Black Widow"); 
	cout << sp2 << endl;  //overloaded
    sp2.print();

    Spider sp3 = *sp; // calls copy constructor
	cout << sp3 << endl; //overloaded?
    sp3.print();

    sp2 = *sp; // calls = overload
	cout << sp2 << endl;
    sp2.print();

    delete sp;

    return 0;
}