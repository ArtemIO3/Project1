#include<iostream>
using namespace std;

class Point // создание своего ТИПА!!!
{
private: // реализация объекта
    int x; // поле объекта
    int y; // поле объекта
    char s; // поле объекта

public: // интерфейс объекта
    Point()// конструктор поумолчанию
    {
        cout << "Constructor\n";
        x = 0;
        y = 0;
        s = 'A';
    }
    Point(char z,int a,int b)
    {
        s = z;
        x = a;
        y = b;
        cout << "Constructor by 3 params: \n";
    }
    void Print() // метод класса 
    {
        cout << s << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // метод класса 
    {
        s = t;
        x = _x;
        y = _y;
    }
    // ----------------- методы аксессоры 
    void SetSumbol(char sym)
    {
        s = sym;
    }
    char GetSumbol()
    {
        return s;
    }
    void SetX(int a)
    {
        if (a >= 0)
        {
            x = a;
        }
    }
    int GetX()
    {
        return x;

    }
    void SetY(int a)
    {
        if (a >= 0)
        {
            y = a;
        }
    }
    int GetY()
    {
        return y;

    }
};
int main() // вызов 
{
    Point a;// вызов конструкторов поумолчанию
    a.Print();
    a.Init('A', 10, -20);
    a.Print();
    Point b('B', 10, -20);//вызов конструктора с параметрами
    b.Print();


    //cout << sizeof(a) << endl; // 12

    //a.Init('A', 10, -20);
    //a.Print();

    //b.Init('B', 5, 16);
    //b.Print();
    //a.SetSumbol('T');
    //a.Print();
    //char c = a.GetSumbol();
    //cout << c << endl;
    //
}