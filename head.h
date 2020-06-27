#include <iostream>
#include <fstream>
#include <string>
#ifndef HEAD_H
#define HEAD_H
using namespace std;
class details
{
	public :
		string name;
		string material;
		double weight;
		double v;
			
    friend ostream& operator<< (ostream& os, const details& details);
     friend istream& operator>> (istream& is, details& details);

};


#endif

