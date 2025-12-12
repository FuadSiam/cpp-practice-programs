#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{  
   string product;
   long long amazon, ebay, walmart;

   cout << "What item do you want to buy: ";
   getline(cin, product);

   cout << "Enter the price from amazone: $";
   cin >> amazon;
   cout << "Enter the price from ebay: $";
   cin >> ebay;
   cout << "Enter the price from walmart: $";
   cin >> walmart;
   
   long long cheapest = min({amazon, ebay, walmart});
   long long average = (amazon + ebay + walmart) / 3;

   cout << "For " << product << endl;
   cout << "Cheapest available price: $" << cheapest << endl;
   cout << "Average avaialbe price: $" << average << endl;
   cout << "Recomended budget for you: $" << average << endl;
   

   return 0;

}
