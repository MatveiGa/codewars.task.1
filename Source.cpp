#include <cinttypes>

#include <vector>
uint64_t descedingOrder(uint64_t a){
	std::vector<uint64_t> digits;
	int result = 0;
	for (; a > 0; a /= 10) {
		int digit = a%10;
		digits.push_back(digit);
		//int z = sizeof(digits);
	}
	for (int j = 0; j < digits.size() - 1; j++) {
		for (int i = 0; i < digits.size()-1-j; i++) {
			if (digits[i] < digits[i + 1]) {
				int temp;
				temp = digits[i];
				digits[i] = digits[i + 1];
				digits[i + 1] = temp;

			}

			
		}
	}
	
	for (int i = 0; i < digits.size(); i++) {
		 result = result * 10 + digits[i];
		
	}
	return result;
}
int main() { 

	int a = descedingOrder(12345678);

		return 0;
}