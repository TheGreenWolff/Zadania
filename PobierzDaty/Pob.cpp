#include <iostream>
#include <fstream>


int main() {
	std::fstream daty;
	std::fstream datyy;
	daty.open("daty.txt");
	if (daty.good() == true) {
		int day, month, year;
		while (daty >> day >> month >> year) {
			std::cout << year << " / " << month << " / " << day;
			datyy << year << month << day;
		}




		daty.close();
	}
	//		if (!daty.is_open()) {
	//			throw CustomException(data, "File could not be opened!");
	//		}

	return 0;
}

