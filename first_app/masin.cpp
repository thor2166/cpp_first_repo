#include <iostream>

int main() {
	std::cout << "Hello World!"<<std::endl;

	int valde;

	valde = 1; 

	std::cout << valde << std::endl;

	if (valde > 17) {
		std::cout << "You may take your drivers license" << std::endl;
	}
	else if (valde < 18) {
		std::cout << "You may not take your drivers license" << std::endl;
	}



	// DEFAULT END //
	system("pause");
	return 0;
}