#include<iostream>
using namespace std;
int main()
{
	int price,total_charge,aptr, quantity;
	char tax_rate = 20;
	double discount;
	cout << "Enter the price of product: ";
	cin >> price;
	cout << "\nEnter your quantity: ";
	cin >> quantity;
	
	if (quantity >= 10)
	{
		discount = 0.1 * quantity;
		cout << "\nYour discount is "<<discount;
		
	}
	else
	{
		cout << "\nplz enter valid number of quantity.";
	}
	aptr = quantity / price * 100;
	total_charge = price * aptr;
	cout << "\nyour total_cost of the product is = " << total_charge << endl;
	
	for (int product = 1; product <= quantity; product++)
	{
		total_charge = product * (price + aptr);
		cout << "The total cost of the product is= " << total_charge << endl;

	}

	return 0;
}