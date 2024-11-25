#include <stdio.h>

int checkPrimeNumber(int n) {
    int flag = 1;                       //T(n) = 1
    if (n == 0 || n == 1) {             //T(n) = 1
        flag = 0;                       //T(n) = 1
    }
    for (int i = 2; i < n /2; ++i) {    //T(n) = n
        if (n % i == 0) {               //T(n) = 1  
            flag = 0;                   //T(n) = 1
        }
    }
    return flag; 
}
// //T(n) = 1 + 1 + 1 + n + 1 + 1 = n ==> //T(n) = O(n)

int checkSphenic(int n, int cnt) {
    if (n == 1 && cnt == 3) {           //T(n) = 1
        return 1;
    }
    if (n <= 1 || cnt == 3) {           //T(n) = 1
        return 0;
    }
    if (n % cnt != 0 || !checkPrimeNumber(cnt)) {       //T(n) = 1 + n
        return checkSphenic(n, cnt + 1);                //T(n) = n/10
    }
    return checkSphenic(n / cnt, cnt);                  //T(n) = n/10
}
//T(n) = 1 + 1 + 1 + n + n/10 + n/10 = O(nlogn)

int main() {
    int n;                                              //T(n) = 1
    printf("Enter the natural number: ");               //T(n) = 1
    scanf("%d", &n);                                    //T(n) = 1
    if (checkSphenic(n, 2)) {                           //T(n) = 1
        printf("%d is not a sphenic number.\n", n);     //T(n) = 1
    }
    else {
        printf("%d is a sphenic number.\n", n);         //T(n) = 1
    }
    return 0;
}
//T(n) = O(1)
