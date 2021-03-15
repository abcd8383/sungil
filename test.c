#include<stdio.h>

void main() {
	int a, b, mok, nmg, c=0;
	printf("정수 두개를 입력하세요");
	scanf("%d", &a);
	scanf("%d", &b);
    int arr_a[10];
    int arr_b[10];
	
    do
    {
        mok = a / 2;
        nmg = a - mok * 2;
        arr_a[c++] = nmg;
        a = mok;
    } while (mok != 0);

    for (int i = c - 1; i >= 0; i--)
        printf("%d", arr_a[i]);
    do
    {
        mok = b / 2;
        nmg = b - mok * 2;
        arr_b[c++] = nmg;
        a = mok;
    } while (mok != 0);

    for (int i = c - 1; i >= 0; i--)
        printf("%d", arr_b[i]);

}