// casio fake loại 3,6.cpp : This file contains the 'main' function. Program execution begins and ends there
#include <iostream>
#include <string>
#include <cmath>
#include <limits>
int main() {
    std::cout << "code moi 2\n";
    std::cout << "hello bro\n";
    std::string name;
    std::cin >> name;
    std::cout << "name: " << name << std::endl;
    while (true) {
        double a;
        double b;
        while (true) {
            std::cout << " nhap a va b :";
            if (std::cin >> a >> b) {
                break;
            }
            else {
                std::cout << " may biet so la cai gi ko bro\n";
                std::cout << "error 404,ng dung qua ngu,may tinh ko the xu li dc bug nay(ERROR 404: The user is the bug. No fix available.)\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        char pheptinh;
        while (true) {
            std::cout << "nhap pheptinh (+,-,*,/,%,^,s,|): ";

            if (!(std::cin >> pheptinh)) {
                if (std::cin.eof()) return 0;

                std::cout << "may mua bang tot nghiep bao nhieu tien the ma tinh ngu nhu may van len lop dc bro(How much did you pay for your diploma? It’s amazing that someone as stupid as you actually managed to pass the grade.) \n";
                std::cin.clear();
                std::cin.ignore(
                    std::numeric_limits<std::streamsize>::max(), '\n'
                );
                continue;
            }

            if (pheptinh == '+' || pheptinh == '-' ||
                pheptinh == '*' || pheptinh == '/' ||
                pheptinh == '%' || pheptinh == '^' ||
                pheptinh == 's' || pheptinh == '|') {
                
            }
            else {
                std::cout << "phep tinh sai con me roi haha\n";
                std::cin.ignore(
                    std::numeric_limits<std::streamsize>::max(), '\n'
                );
                continue;
            }

            if (pheptinh == '+') {
                std::cout << "ket qua: " << a + b << '\n';
            }
            else if (pheptinh == '-') {
                std::cout << "ket qua: " << a - b << '\n';
            }
            else if (pheptinh == '*') {
                std::cout << "ket qua: " << a * b << '\n';
            }
            else if (pheptinh == '/') {
                if (b == 0) {
                    std::cout << "Khong the chia cho 0 bro\n";
                    continue;
                }
                std::cout << "ket qua: " << a / b << '\n';
            }
            else if (pheptinh == '%') {
                if (b == 0) {
                    std::cout << "Khong the tinh phan tram voi b = 0\n";
                    continue;
                }
                std::cout << "ket qua: " << a / b * 100 << '\n';
            }
            else if (pheptinh == '^') {
                std::cout << "ket qua: " << pow(a, b) << '\n';
            }
            else if (pheptinh == 's') {
                if (a < 0) {
                    std::cout << "can bac hai cua so am la cai deo gi?(what is the square root of a negative number?)\n";
                    continue;
                }
                std::cout << "ket qua: " << sqrt(a) << '\n';
            }
            else if (pheptinh == '|') {
                std::cout << "ket qua: " << fabs(a) << '\n';
            }

            break;

        }

            char tieptuc;
            while (true) {
                std::cout << "tiep tuc(y/n) :";
                std::cin >> tieptuc;
                if (tieptuc == 'n' || tieptuc == 'y') {
                    break;
                }
                else {
                    std::cout << "sang tao sai cho roi bro(Creativity in the wrong place bro)\n";
                    std::cout << "chon lai nhanh me may len di thg that bai(hey failer,you need choose more quickly than this bro???))\n";
                }
                }
                
            if (tieptuc == 'n') {
                break;
            }
            }
    }  
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil