#include <iostream>
using namespace std;

//Create class Car
class Car
{
	//Protected access specifiers
protected:
	string feature1;
	string feature2;
	string feature3;

	//Public access specifiers
public:

	//Create a virtual function
	virtual void features()
	{
		cout << "\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "This function loads car features and prints them" << endl;
		cout << "\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
};

//Class ferrari derived from parent class Car
class ferrari : public Car
{
	//Public access modifiers
public:
	//Function to add feature through user input and print features
	void features()
	{
		cout << "\nPlease choose any of the 3 features to add to the Ferrari: \n"
			<< "\nWindow tint, Exhaust, Turbo, Muffler, Tune, Ecu, Engine Upgrade, Suspension\n" << endl;
		cout << "Type in Feature 1: ";
		cin >> feature1;
		cout << "\n       Feature 2: ";
		cin >> feature2;
		cout << "\n       Feature 3: ";
		cin >> feature3;

		cout << "\nCONGRATS Your Chosen features have been added to your new Ferrari: " 
		<< feature1 << ", " << feature2 << ", " << feature3 << endl;

		cout << "\nThank you!" << endl;
		cout << "*******************************************************" << endl;
		cout << "*******************************************************" << endl;
	}
}; 

//Class lamborghini derived from parent class Car
class lamborghini : public Car
{
	//Public access modifiers
public:
	//Function to add feature through user input and print features
	void features()
	{
		cout << "\nPlease choose any of the 3 features to add to the lamborghini: \n"
			<< "\nWindow tint, Exhaust, Turbo, Muffler, Tune, Ecu, Engine Upgrade, Suspension\n" << endl;
		cout << "Type in Feature 1: ";
		cin >> feature1;
		cout << "\n       Feature 2: ";
		cin >> feature2;
		cout << "\n       Feature 3: ";
		cin >> feature3;		

		cout << "\nCONGRATS Your Chosen features have been added to your new lamborghini: "
			<< feature1 << ", " << feature2 << ", " << feature3 << endl;

		cout << "\nThank you!" << endl;

		cout << "*******************************************************" << endl;
		cout << "*******************************************************" << endl;

	}
};

//Class nissanGtr derived from parent class Car
class nissanGtr : public Car
{
	//Public access modifiers
public:
	//Function to add feature through user input and print features
	void features()
	{
		cout << "\nPlease choose any of the 3 features to add to the Nissan GTR: \n"
			<< "\nWindow tint, Exhaust, Turbo, Muffler, Tune, Ecu, Engine Upgrade, Suspension\n" << endl;
		cout << "Type in Feature 1: ";
		cin >> feature1;
		cout << "\n       Feature 2: ";
		cin >> feature2;
		cout << "\n       Feature 3: ";
		cin >> feature3;

		cout << "\nCONGRATS Your Chosen features have been added to your new Nissan GTR: "
			<< feature1 << ", " << feature2 << ", " << feature3 << endl;

		cout << "\nThank you!" << endl;

		cout << "*******************************************************" << endl;
		cout << "*******************************************************" << endl;

	}
};

int main()
{
	//Create objects for the parent class and its derived classes
	Car carObj;
	ferrari feObj;
	lamborghini laObj;
	nissanGtr GtObj;
	   
	//Create pointer for base class
	Car* cPtr;

	//Point to derived class and call virtual function feature
	cPtr = &GtObj;
	cPtr->features();

	//Point to derived class and call virtual function feature
	cPtr =&feObj;	
	cPtr->features();

	//Point to derived class and call virtual function feature
	cPtr = &laObj;
	cPtr->features();

	//Point to base class and call virtual function feature
	cPtr = &carObj;
	cPtr->features();

	
	
}