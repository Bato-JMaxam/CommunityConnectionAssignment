#include "pump.h"
// comp333 Assignment 2
// Joshua Maxam / imp file.

Pump::Pump()
{
	cout << "Pump default constructed " << endl;
	amtGas=0;
	tankCapacity=10;
}
Pump::Pump(int newAmtGas, int newTankCapacity)
{
	cout << " pump non default " << endl;
	amtGas = newAmtGas < 0 ? 0 : newAmtGas;
	tankCapacity = newTankCapacity < 0 ? 0 : newTankCapacity;
}
void Pump::showPump(ostream& out)const
{
	out << " tank amount: " << amtGas<< " tank capacity: " << tankCapacity << endl;
}
GasPump::GasPump():Pump()
{
	cout << "GasPump default constructed " << endl;
	gasPrice = 0.0;
	typeGas = new string;
	assert(typeGas != NULL);
	cout << "enter gas type: ";
	getline(cin, *typeGas);
	while (typeGas->empty())
	{
		cout << "you must supply a description ";
		getline(cin, *typeGas);
	}
	cin.ignore(80, '\n');
}
GasPump::GasPump(int newAmtGas, int newTankCapacity, string newTypeGas, double NewGasPrice)
	:Pump(newAmtGas, newTankCapacity)
{
	cout << " gasPump non-default " << endl;
	gasPrice = NewGasPrice < 0.0 ? 0.0 : NewGasPrice;
	typeGas = new string(newTypeGas.length() == 0 ? " NO NAME " : newTypeGas);
	assert(typeGas != NULL);
}
void GasPump::showPump(ostream& out)const
{
	out << " gas type: " << *typeGas << " gas price: " << gasPrice << endl;
	Pump::showPump(out);
}
GasPump::~GasPump()
{
	cout << " We be inside here destructor " << endl;
	delete typeGas;
}
FillTank::FillTank(int newAmtGasTank, int newTankCapacity):Pump(newAmtGasTank, newTankCapacity)
{
	cout << "FillTank non-default constructor" << endl;
}
FillTank::FillTank() : Pump()
{
	cout << "FillTank default constructor" << endl;
}
void FillTank::showPump(ostream& out)const
{
	cout << "FillTank showPump " << endl;
	Pump::showPump(out);
}
void Pump::pumpGas(int newTankAmt)
{
	cout << "pumpGas() function: " << endl << endl;
	newTankAmt = tankCapacity - amtGas;
	cout << "Amount of in Tank: " << newTankAmt << endl;
	cout << "Amount of Gas Pumped: " << amtGas << endl;
}
void GasPump::buyGas(int newAmtGas)
{
	cout << "buyGas() function" << endl << endl;
	Pump::pumpGas(newAmtGas);
	cout << "price to pay: " << gasPrice * amtGas << endl;
}
void FillTank::addGas()
{
	cout << "How much would you like to add? ";
	cin >> amtGas;
	while (cin.fail() || amtGas > tankCapacity)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "error: please enter # with in tank capacity ";
		cin >> amtGas;
	}
	cin.ignore(80, '\n');
}