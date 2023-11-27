// #include <iostream>
// #include <cmath>
 
// using namespace std;
 
 
// int main()
// {
// 	long long a, b,temp;
// 	long long sum_of_numbers, sum_of_odds, sum_of_evens;
// 	cin >> a >> b;
// 	if (b > a)
// 	{
// 		temp = a;
// 		a = b;
// 		b = temp;
// 	}
// 	sum_of_numbers = ((a * (a + 1)) / 2) - (((b - 1) * b) / 2);
// 	long long n1 = ceil(a/2);
// 	long long n2 = ceil((b - 1) / 2);
// 	sum_of_evens = (n1 * (n1+ 1))- (n2 * (n2 + 1));
// 	sum_of_odds = sum_of_numbers - sum_of_evens;
// 	cout << sum_of_numbers << "\n" << sum_of_evens << "\n" << sum_of_odds << "\n";
 
// 	return 0;
 
// }