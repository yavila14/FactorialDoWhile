#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n,numero;
	double m;
	n=0;
	m=1;
	i=1;
	cout <<"Digite hasta que numero desea calcular el factorial ";
	cin>>n;
	do
	{
	m=m*i;
	i=i+1;
	}while(i<=n);
	cout <<m;
	return 0;
}
