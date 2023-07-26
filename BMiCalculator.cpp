// BMiCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define LOG cout<<'\n'<<
#define GET cin>>
char retry = 'R';
void bmiIndicator(double bmi) {
	if (bmi <= 18.4) {
		LOG " You are Under-weighted";
		LOG " BMi = " << bmi;
	}

	if (bmi > 18.4 && bmi <= 24.9) {
		LOG " You are Normal.";
		LOG " BMi = " << bmi;

	}
	if (bmi > 24.9 && bmi <= 39.9) {
		LOG " You are over-weighted.";
		LOG " BMi = " << bmi;

	}

	if (bmi > 39.9) {
		LOG " You are Obese";
		LOG " BMi = " << bmi;
	}



}




int main()
{
	system("COLOR E5");
	while(retry == 'R' || retry == 'r') {                    
	double weight{}, height{}, bmi{};
	LOG " Choose you measurment system: ";
	LOG " 1. Imperial System (Pound and inch)";
	LOG " 2. Metric System (Kilograms and meters)";
		int systemChoice = 1;
		LOG " Choose the measurment system: (1 or 2) : ";
		GET systemChoice;
		if (systemChoice == 1) {

			LOG " Enter your weight in Pound: ";
			GET weight;
			LOG " Enter your height in Inches: ";
			GET height;
			bmi = 703.000 * double(double(weight) / double(height * height));
			bmiIndicator(bmi);
		}
		else {
			LOG " Enter your weight in KiloGrams: ";
			GET weight;
			LOG " Enter your height in meters: ";
			GET height;
			bmi = double(double(weight) / double(height * height));
			bmiIndicator(bmi);
		}

		
		LOG " Enter Q to quit app, R to restart:";
		GET retry;
		if (retry == 'q' || retry == 'Q') exit(true);
	}

}