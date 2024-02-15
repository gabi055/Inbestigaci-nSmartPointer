
/*                           -Smart Pointer-
Pude comprender que es algo parecido a una envoltura de un puntero regular ya que
nos sirve para prevenir errores de gestión de memoria como la perdida de 
memoria o eliminar accidentalmente un puntero de forma incorrecta. Se encarga 
de liberar la memoria asociada al objeto al que se esta apuntando, una vez que 
no sea necesaria.*/

// Código con smart pointer sacado de la web.

#include <iostream>
#include<memory>
using namespace std;
class Rectangle
{  //¿Por qué en la declaración de variables no están dentro de un public o private?
    int Length;
    int Breadth;
    public:
        Rectangle(int l, int b)
        {
            Length = l;
            Breadth = b;
        }
        int Area()
        {
            return Length * Breadth;
        }
};
int Fun(int l, int b)
{   
    unique_ptr<Rectangle> p(new Rectangle(l, b));
    int area = p->Area();
    return area;
}
int main()
{
    while (1)
    {
        int Result = Fun(10, 20);
        cout << Result << endl;
    }
}