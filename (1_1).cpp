#include <iostream>
using namespace std;

int main()
{
int a, b, c;
cout << " Vvedite 3 4isla: ";
cin >> a >> b >> c;

int min = a;
int max = a;

if (b < min) {
min = b;
}
if (c < min) {
min = c;
}
if (b > max) {
max = b;
}
if (c > max) {
max = c;
}
cout << "Max: " << max << "  " ;
cout << "Min: " << min;

return 0;
} 
