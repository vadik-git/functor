#pragma once

#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Auto
{
public:
	

	Auto(const string &name, const int &yearOfIssue,const double&engineCapacity,const int &price) {
		this->name = name;
		this->yearOfIssue = yearOfIssue;
		this->engineCapacity = engineCapacity;
		this->price = price;
	}

	string name;
	int yearOfIssue;
	double engineCapacity;
	int price;
	
};

