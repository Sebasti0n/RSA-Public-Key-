/*
RSA is a asymetric encryption algoritm 

*/

#include <iostream>
#include <math.h>


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
	int p; 
	int q; 

	//verify that meets the range 
	for (i, i > 0, i++)
	{

	}

	//Compute and display modulo n 
	
	//TOtient fucntion value 0 


	//Generate private key: d 

	//Generate public key: e based on n and the totient value 0

	//Verify that d and e are multiclative inverse of each other based on 0

	system ("pause");
	return 0; 
}