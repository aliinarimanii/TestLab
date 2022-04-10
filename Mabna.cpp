#include<iostream>
#include<string>
#include<sstream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
// This is a test change from Houshmand
bool flag = true;

string mabna10_2(string R2) {
	int x = 0, m = 0, p = 0;
	int r2;
	string final;
	r2 = stoi(R2);
	if (r2 == 1 || r2 == 0)
		final = "0000000";
	else if (r2 < 4)
		final = "000000";
	else if (r2 < 8)
		final = "00000";
	else if (r2 < 16)
		final = "0000";
	else if (r2 < 32)
		final = "000";
	else if (r2 < 64)
		final = "00";
	else if (r2 < 128)
		final = "0";
	else if (r2 < 256)
		final = "";
	while (r2 > 0)
	{
		x = r2 % 2;
		r2 /= 2;
		m += x * pow(10, p);
		p++;
	};
	return final += to_string(m);
}

int main(){
	sring n;
	cin >> n;
	cout << mabna10_2(n);
}
