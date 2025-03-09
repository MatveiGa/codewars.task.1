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
		//int z = sizeof(digits);
	}
	/*for (size_t j = 0; j < digits.size() - 1; j++) {
		for (int i = 0; i < digits.size()-1-j; i++) {
			if (digits[i] < digits[i + 1]) {
				int temp;
				temp = digits[i];
				digits[i] = digits[i + 1];
				digits[i + 1] = temp;

			}

			
		}
	}
	*/
	std::sort(digits.begin(),digits.end(),predicate );
	for (size_t i = 0; i < digits.size(); i++) {
		 result = result * 10 + digits[i];
		
	}
	return result;
}
int main() { 

	int a = descedingOrder(12345678);

		return 0;
}