#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include"Auto.h"
using namespace std;
template<typename T>
void print(const vector<T>&autoList) {
	for (auto e : autoList) {
		cout << "Name >> " << e.name << " Year of issue >> "
			<< e.yearOfIssue << " Engine capacity >> " << e.engineCapacity
			<< " Price >> " << e.price << " $" << endl;
	}
}

int main() {
	Auto a();
	vector<Auto>autoList
	{
		Auto("BMW", 2012, 2.5, 12000),
		Auto("KIA", 2010, 2.0, 10000),
		Auto("MERCEDES", 2009, 3.5, 11000),
	    Auto("TOYOTA", 2012, 2.5, 9000),
	    Auto("MAZDA", 1991, 2.2, 1200),
	    Auto("FORD", 2013, 2.5, 13000),
	    Auto("RENAULT", 2011, 2.0, 6000),
	    Auto("RANGE-ROVER", 2014, 2.3, 15000),
	    Auto("AUDI", 2007, 2.5, 7000),
	};
	print(autoList);
	cout << endl;
	cout << endl;
	cout << "Sort Price" << endl;
	cout << endl;
	sort(autoList.begin(), autoList.end(), [](const Auto a1,const Auto b1) {
		return a1.price < b1.price;
	});
	print(autoList);
	sort(autoList.begin(), autoList.end(), [](const Auto a1, const Auto b1) {
		return a1.name < b1.name; //ÒÓÒ ÇÌ²ÍÞªÌ ÍÀ ÒÅ ÏÎ ×ÎÌÓ ÕÎ×ÅÌÎ ÑÎÐÒÓÂÀÒÈ )
	});
	cout << endl;
	cout << endl;
	cout << "Sort Name" << endl;
	cout << endl;
	print(autoList);
	
	auto result = find_if(autoList.begin(),autoList.end(),[](const Auto&a1){
		
		return a1.name =="LEXSUS";//ÒÓÒ ÇÌ²ÍÞªÌ ÍÀ ÒÅ ÏÎ ×ÎÌÓ ÕÎ×ÅÌÎ ØÓÊÀÒÈ )
	});
	if (result == autoList.end()) {
		cout << "Not find name auto" << endl;
	}
	else {
		cout << "Auto find" << endl;
	}

	autoList.clear();
	cout << "Delete list auto" << endl;
	print(autoList);



	system("pause");
	return 0;
}