/*
RSA is a asymetric encryption algoritm 

*/

#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;

int gcd(int a, int h) //Greatest Common Divisor for Totient Function
{
	if (a == 0)
	{
		return h; 
		return gcd(h % a, a); 
	}
}

int main()
{
	//Get input for two prime numbers p and q (range 5000 to 10000)
	double p = 5000; 
	double q = 10000; 
	double n = p * q; 
	double count; 
	double totient = (p - 1) * (q - 1); //totient function



//Generate public key: e based on n and the totient value 0
	double e = 2; 

//check co-prime satisfies e > 1
	while (e < totient)
	{
		count = gcd(e, totient); 
		if (count == 1)
			break;
		else
			e++; 
	}

	//Compute and display modulo n 
	
	//TOtient fucntion value 0 


	//Generate private key: d 
	double d; 
	double k = 2; 
	d = (1 + (k * totient)) / e; 
	double msg = 12; 
	double c = pow(msg, e); 
	double m = pow(c, d); 
	c = modf(c, n); 
	m = modf(m, n); 

	//Verify that d and e are multiclative inverse of each other based on 0

	cout << "Message data = " << msg; 
	cout << "\n" << "p = " << p; 
	cout << 
	system ("pause");
	return 0; 
}
