#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Date{
	private:
	int month,day,year;
	string dateInstring;	
		
	public:
		Date(int _month,int _day,int _year)
		:month(_month),day(_day),year(_year){};
	operator const char*(){
		ostringstream formmatedDate;
		formmatedDate<<month<<"/"<<day<<"/"<<"/"<<year;
		
		dateInstring=formmatedDate.str();
		return dateInstring.c_str();
	}
};
int main(){
	Date a(9,10,2002);
	cout<<a<<endl;
	return 0;
}
