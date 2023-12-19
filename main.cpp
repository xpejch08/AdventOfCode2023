#include <iostream>
#include <stdio.h>
#include <fstream>


class adv1A{
public:
    int findDigitInString(std::string str) {
        int i = 0;
        std::string number = "";
        int firstDigitFlag = 0;
        char lastDigit = '0';
        while (str[i] != '\0') {
            if (isdigit(str[i])) {
                if (firstDigitFlag == 0) {
                    firstDigitFlag = 1;
                    number += str[i];
                }
                lastDigit = str[i];
            }
            i++;
        }
        number += lastDigit;
        return std::stoi(number);
    }
private:
    std::string str;
    int i;
    std::string number;
    int firstDigitFlag;
    char lastDigit;
};

class adv1B{
public:
    int findDigitInString(std::string str) {
        int i = 0;
        
        std::string number = "";
        int firstDigitFlag = 0;
        char lastDigit = '0';
        while (str[i] != '\0') {
            if (isdigit(str[i])) {
                if (firstDigitFlag == 0) {
                    firstDigitFlag = 1;
                    number += str[i];
                }
                lastDigit = str[i];
            }
            i++;
        }
        number += lastDigit;
        return std::stoi(number);
    }
private:
    std::string str;
    int i;
    std::string number;
    int firstDigitFlag;
    char lastDigit;
};



int main() {
    std::ifstream file("input.txt");
    adv1A adv1A;
    int sum = 0;
    for(std::string lineLoop;std::getline(file, lineLoop);){
        sum += adv1A.findDigitInString(lineLoop);
    }
    file.close();
    std::cout << sum;

    return 0;
}
