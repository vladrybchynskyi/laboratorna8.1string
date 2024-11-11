#include <iostream>
#include <string>

using namespace std;

// Підрахунок кількості символів B, A, S, I, C у рядку std::string
void countBASICCharsString(const string& str, int& countB, int& countA, int& countS, int& countI, int& countC)
{
    countB = countA = countS = countI = countC = 0;

    // Перебираємо кожен символ рядка
    for (char ch : str)
    {
        switch (ch)
        {
        case 'B': countB++; break;
        case 'A': countA++; break;
        case 'S': countS++; break;
        case 'I': countI++; break;
        case 'C': countC++; break;
        }
    }
}

// Функція для заміни всіх входжень "BASIC" на "Delphi" у рядку std::string
string replaceBASICWithDelphiString(std::string str)
{
    const string target = "BASIC";
    const string replacement = "Delphi";
    size_t pos = 0;

    // Замінюємо всі входження "BASIC" на "Delphi"
    while ((pos = str.find(target, pos)) != std::string::npos)
    {
        str.replace(pos, target.length(), replacement);
        pos += replacement.length();
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Лічильники символів B, A, S, I, C
    int countB, countA, countS, countI, countC;
    countBASICCharsString(str, countB, countA, countS, countI, countC);

    // Виведення результату підрахунку символів
    cout << "Count of B: " << countB << endl;
    cout << "Count of A: " << countA << endl;
    cout << "Count of S: " << countS << endl;
    cout << "Count of I: " << countI << endl;
    cout << "Count of C: " << countC << endl;

    // Замінюємо "BASIC" на "Delphi" і виводимо результат
    string modifiedStr = replaceBASICWithDelphiString(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
