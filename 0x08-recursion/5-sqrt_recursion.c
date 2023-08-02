#include "main.h"
int _sqrt_recursion(int n) {
if (n < 0) {
return (-1);
}
if (n == 0 || n == 1) {
return (n);
}
int mid = n / 2;
if (mid * mid == n) {
return (mid);
} else if (mid * mid < n) {
return (mid);
} else {
return _sqrt_recursion(mid - 1);
}
}

