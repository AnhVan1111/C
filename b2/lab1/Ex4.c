#include <stdio.h>
#include <math.h>
// Write a pseudo-code by commenting in the file then implement a program into enter a natural number n and verify whether n is sphenic. Calculate The Complexity of yourprogram.
/*Pseudocode
function checkPrimenumber(n)
	flag = 1
	if n equals 0 or n equals 1 then
		flag = 0
	end if
	for i =2 to n / 2 do
		if n modulo i equals 0
			flag = 0
		end if
	end for
	return flag
end function*/
int checkPrimeNumber(int n) {
    int flag = 1;
    if (n == 0 || n == 1) {
        flag = 0;
    }
    for (int i = 2; i < n /2; ++i) {
        if (n % i == 0) {
            flag = 0;
        }
    }
    return flag; 
}

/*Pseudocode
function checkSphenic(n)
	primeCnt = 0
	flag = 1
	for i = 2 to n do
		if n modulo i equals 0 and checkPrimenumber(i) then
			primeCnt = primeCnt + 1
			if primeCnt > 3 then
				flag = 0
			end if
		end if
	end for
	return flag
end function*/
int checkSphenic(int n) {
    int primeCnt = 0, flag = 1;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0 && checkPrimeNumber(i)) {
            primeCnt++;
            if (primeCnt > 3) {
                flag = 0;
            } 
        }
    }
    return flag;
}   
/* Pseudocode
function main()
	n = 0
	printf" Enter a natural number:"
	read
	if checkSphenic(n) then
		printf n, "is a sphenic number"
	else
		printf n, "is not a sphenic number"
	end if
	return 0
end function*/
int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (checkSphenic(n)) {
        printf("%d is a sphenic number.\n", n);
    }
    else {
        printf("%d is not a sphenic number.\n", n);
    }
    return 0;
}

// complexity: O(n)