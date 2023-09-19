//ЗАДАНИЯ 1-3 ПО МАКРОСАМ БЫЛИ ВЫПОЛНЕНЫ НА ПРАКТИКЕ ВО ВРЕМЯ УРОКА
//для удобства 5 задание было закомментировано 

//Task 4----------------------------------------------------------------------
//4) Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.
//Проиллюстрируйте работу функции примером.

#include <iostream>
using namespace std;

void stars(char symbol, int number) {
    if (number <= 0) {
        return;
    }

    cout << symbol;
    stars(symbol, number - 1);
}

int main() {
    char symbol = '*';
    int number;

    cout << "Enter number: ";
    cin >> number;

    stars(symbol, number);

    return 0;
}


//Task 5--------------------------------------------------------------------------
//5) Напишите рекурсивную функцию для вывода на экран всех целых чисел от 1 до n.


/*
#include <iostream>
using namespace std;

void numbers(int n) {
    if (n <= 0) {
        return;
    }

    numbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;

    cout << "Enter number n: ";
    cin >> n;

    numbers(n);

    return 0;
}

*/



