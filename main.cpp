
#include <iostream>
#include <fstream>
#include <string>
#include "mylib.h"


#pragma pack(push, 1)
struct Employee
{
    std::string NickName;
    long id;
    unsigned short age;
    double salary;
};
#pragma pack(pop)

int main() {

    ///// exercise 1, 5

    const int size = 5;
    float arr[size];
    std::cout << "Enter 5 float numbers for array: ";
    for (size_t i = 0; i < size; i++)
    {
         arr[i]= FillArr();
    }
    
    PrintArr(size, arr);

    PrintMinusPlusNs::PrintMinusPlus(size, arr);
    //////////

    ///// exercise 2

    int x, y;
    std::cout << "Enter 2 numbers: ";
    std::cin >> x >> y;
    std::cout << std::boolalpha <<  NUM(x, y) << std::endl; // NUM нахдоится в mylib.h

    /////////

    //// exercise 3

    int arr2[SIZE];
    int* pOfarr2;
    
    pOfarr2 = FillArr2(arr2);
    pOfarr2 = BubbleSort(pOfarr2);

    PrintArr2(pOfarr2);

    ///////

    ///// exercise 4

    
    Employee* PEmployeArr = new (std::nothrow) Employee[STRSIZE];
    if (PEmployeArr != nullptr)
    {
        std::string FileName;
        std::cout << "Enter file name: ";
        std::cin >> FileName;

        std::ofstream fout1(FileName + ".txt");

        std::cout << "Enter employee nickname: ";
        std::cin >> PEmployeArr[0].NickName;
        fout1 << "Employee Nickname: " << PEmployeArr[0].NickName << std::endl;
        std::cout << "Enter employee id: ";
        std::cin >> PEmployeArr[0].id;
        fout1 << "Employee id: " << PEmployeArr[0].id << std::endl;
        std::cout << "Enter employee age: ";
        std::cin >> PEmployeArr[0].age;
        fout1 << "Employee age: " << PEmployeArr[0].age << std::endl;
        std::cout << "Enter employee salary: ";
        std::cin >> PEmployeArr[0].salary;
        fout1 << "Employee salary: " << PEmployeArr[0].salary << std::endl;
        fout1.close();

        std::cout << PEmployeArr[0].NickName << " " << PEmployeArr[0].id << " " << PEmployeArr[0].age << " " << PEmployeArr[0].salary << std::endl;

        std::cout << "Size of Structure: " << sizeof(Employee) << std::endl;

        delete[] PEmployeArr;
        PEmployeArr = nullptr;

    }


    ////


    system("pause");
    return 0;
}