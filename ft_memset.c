#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*b1;

	b1 = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		*(b1 + idx) = (unsigned char)c;
		idx ++;
	}
	return (b1);
}

/*
#include<stdio.h>
#include<string.h>

int main() {
	int arr[5];
	int arr1[5];
	memset(arr, 'c', sizeof(int) * 5); //크기 5 만큼 0으로 초기화

    for (int i = 0; i < 8; i++) {
        printf("[%c]", *(arr + i));
    }
    printf("\n");
	ft_memset(arr1, 'c', sizeof(int) * 5); //크기 5 만큼 0으로 초기화

    for (int i = 0; i < 8; i++) {
        printf("[%c]", *(arr1 + i));
    }
    printf("\n");
    return 0;
}
*/
