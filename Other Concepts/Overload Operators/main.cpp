

Complex &operator+(Complex &a, Complex &b) { 
    Complex* c = new Complex();
    c->a=a.a+b.a;
    c->b=a.b+b.b;
    return *c; 
}

std::ostream &operator<<(std::ostream &os, Complex &a) {
  return os << a.a << (a.b > 0? "+i": "-i") << a.b;
}

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

