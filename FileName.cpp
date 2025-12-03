#include <iostream>;
#include <windows.h>;
#include "\lab\oop6\oop6\Number.h";

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Number n;
    n.Read();

    cout << "Додавання: " << n.full + n.last << endl;
    cout << "Віднімання: " << n.full - n.last << endl;
    cout << "Множення: " << n.full * n.last << endl;

    if (n.full == n.last)
        cout << "Рівні" << endl;
    else
        cout << "Не рівні" << endl;

    Number n2(5, 3.14);
    Number n3(n2);

    cout << "Об'єкт n2: ";
    n2.Display();

    cout << "Об'єкт n3 (копія n2): ";
    n3.Display();

    return 0;
}
