#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;
    cin>>a>>l>>c>>f>>d;
    scanf("%d %ld %c %f %lf", &a, &l, &c, &f, &d);
    printf("%d \n%ld \n%c \n%f \n%lf ", a, l, c, f, d);
    return 0;
}
