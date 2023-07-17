#include <iostream>
#include <string>

bool canObtainByShifting(std::string str1, std::string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    std::string shiftedStr = str1.substr(2) + str1.substr(0, 2);
    if (shiftedStr == str2) {
        return true;
    }

    return false;
}

int main() {
    std::string str1 = "AMAZON";
    std::string str2 = "AZONAM";

    if (canObtainByShifting(str1, str2)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
