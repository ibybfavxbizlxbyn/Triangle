#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include <iostream>
#include <cmath>

using std :: cout;
using std :: cin;
using std :: endl;

class triangle
{
private:
    int a;
    int b;
    int c;

    bool isOK (const int a, const int b, const int c)
    {
        if ((a <= 0) || (b <= 0) || (c <= 0) || (a >= b + c) || (b >= a + c) || (c >= a + c))
        {
            return false;
        } else
        {
            return true;
        }
    }
public:
    triangle (const int a = 3, const int b = 4, const int c = 5)
    {
        if (isOK(a, b, c))
        {
            this->a = a;
            this->b = b;
            this->c = c;
        } else
        {
            cout << endl << "Error: No such triangle;" << endl;
            cout << "Would you like to create default(3:4:5) triangle(y/n): ";
            char sym;
            cin >> sym;
            if (sym == 'y')
            {
                this->a = 3;
                this->b = 4;
                this->c = 5;
            } else
            if (sym != 'n')
            {
                cout << "Error: wrong input of data;" << endl;
            }
        }
    }
    ~triangle()
    {
        cout << "deconstruction triangle:" << endl << "a = " << this->a << endl << "b = " << this->b << endl << "c = " << this->c << endl << endl;
    }

    void setA (const int a = 3)
    {
        if (isOK(a, this->b, this->c))
        {
            this->a = a;
        } else
        {
            cout << endl << "Error: No such triangle;" << endl;
            cout << "Would you like to create default(3:4:5) triangle(y/n): ";
            char sym;
            cin >> sym;
            if (sym == 'y')
            {
                this->a = 3;
                this->b = 4;
                this->c = 5;
            } else
            if (sym != 'n')
            {
                cout << "Error: wrong input of data;" << endl;
            }
        }
    }

    int getA () const
    {
        return this->a;
    }

    void setB (const int b = 4)
    {
        if (isOK(this->a, b, this->c))
        {
            this->b = b;
        } else
        {
            cout << endl << "Error: No such triangle;" << endl;
            cout << "Would you like to create default(3:4:5) triangle(y/n): ";
            char sym;
            cin >> sym;
            if (sym == 'y')
            {
                this->a = 3;
                this->b = 4;
                this->c = 5;
            } else
            if (sym != 'n')
            {
                cout << "Error: wrong input of data;" << endl;
            }
        }
    }
    int getB () const
    {
        return this->b;
    }

    void setC (const int c = 5)
    {
        if (isOK(this->a, this->b, c))
        {
            this->c = c;
        } else
        {
            cout << endl << "Error: No such triangle;" << endl;
            cout << "Would you like to create default(3:4:5) triangle(y/n): ";
            char sym;
            cin >> sym;
            if (sym == 'y')
            {
                this->a = 3;
                this->b = 4;
                this->c = 5;
            } else
            if (sym != 'n')
            {
                cout << "Error: wrong input of data;" << endl;
            }
        }
    }
    int getC () const
    {
        return this->c;
    }

    int perimetr () const
    {
        return this->a + this->b + this->c;
    }

    double square () const
    {
        double p = (this->a + this->b + this->c)/2.0;
        return sqrt(p*(p - this->a)*(p - this->b)*(p - this->c));
    }
};

#endif // TRIANGLE_H_INCLUDED
