#include <stdio.h>
#include <math.h>

int main(){
	// qua eq is ax^2+bx+c = 0 where a,b,c are real numbers and a!=0  
	// roots decisive part is the determinant
	// determinant = b^2-4ac
// If the discriminant is greater than 0, the roots are real and different.
// If the discriminant is equal to 0, the roots are real and equal.
// If the discriminant is less than 0, the roots are complex and different.

	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

    	// condition for real and different roots
	if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    	}

	// condition for real and equal roots
	else if (discriminant == 0) {
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf;", root1);
	}
	// if roots are not real
	else {
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
	}
	return 0;
}
