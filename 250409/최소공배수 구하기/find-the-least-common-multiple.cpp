#include <stdio.h>

int SmallestGongBaeSu(int a, int b) {
	int amlt = a, bmlt = b;

	while (amlt != bmlt) {
		if (amlt > bmlt) bmlt += b;
		if (amlt < bmlt) amlt += a;
	}

	return amlt;
}

int main() {
	int n=0, m=0;

	scanf("%d %d", &n, &m);
	printf("%d", SmallestGongBaeSu(n, m));

	return 0;
}
