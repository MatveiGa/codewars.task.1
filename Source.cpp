#include <iostream>
#include <cinttypes>
#include <algorithm>
#include <vector>

bool predicate(int a, int b) {
	return a > b;

}
uint64_t descedingOrder(uint64_t a){
	std::vector<uint64_t> digits;
	uint64_t result = 0;
	for (; a > 0; a /= 10) {
		int digit = a%10;
		digits.push_back(digit);
	
	}
	
	std::sort(digits.begin(),digits.end(),predicate );
	for (size_t i = 0; i < digits.size(); i++) {
		 result = result * 10 + digits[i];
		
	}
	return result;
}
int main() { 
	uint64_t number;
	std::cout << "Enter a number to sort ";
	std::cin >> number;
	std::cout << descedingOrder(number);



		return 0;
}