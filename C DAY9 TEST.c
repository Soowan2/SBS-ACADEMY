#include <stdio.h>

int a = 0;

int main(void) {

    int a = 10;
    {
        int a = 20;
        {
            {
                int a = 30;
                {
                    {
                        int a = 40;
                        {
                            int a = 50;
                        }
                    }
                    printf("%d\n", a); // 30
                }
            }
            printf("%d\n", a); // 20
        }
    }
    printf("%d\n", a); // 10

    return 0;
}