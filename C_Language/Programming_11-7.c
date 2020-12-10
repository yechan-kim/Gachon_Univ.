#include <stdio.h>

enum { triangle, rectangle, circle };

typedef struct {
	int type;
	union {
		struct {
			int base, height;
		}tri;
		struct {
			int width, height;
		}rect;
		struct {
			int radius;
		}cir;
	}s;
}shape;

int main() {
	shape p;

	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf("%d", &p.type);

	switch (p.type) {
	case triangle:
		printf("밑변과 반지름을 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &p.s.tri.base, &p.s.tri.height);
		printf("면적은 %d", (p.s.tri.base*p.s.tri.height) / 2);
		break;
	case rectangle:
		printf("가로와 세로를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &p.s.rect.width, &p.s.rect.height);
		printf("면적은 %d", p.s.rect.width*p.s.rect.height);
		break;
	case circle:
		printf("반지름을 입력하시오(예를 들어서 100): ");
		scanf("%d", &p.s.cir.radius);
		printf("면적은 %.2lf", (double)p.s.cir.radius*3.14);
	}

	return 0;
}