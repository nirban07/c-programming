#include <stdio.h>

// float average(int arr[]){
// 	float sum = 0;
// 	int size = sizeof(arr)/4;
// 	for (int i = 0; i < size; i++)
// 	{
// 		sum+=arr[i];
// 	}
// 	sum/=size;
// 	return sum;
// };

int main(){
	// take 5 input in array and print the average


	int marks[10], i, n, sum = 0, average;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	for(i=0; i < n; ++i) {
	printf("Enter number%d: ",i+1);
	scanf("%d", &marks[i]);
		
	// adding integers entered by the user to the sum variable
	sum += marks[i];
	}

	average = sum / n;
	printf("Average = %d", average);
	// int arr[5];
	// printf("the size of arr is : %lu",sizeof(arr));
	// for (int i = 0; i < ; i++)
	// {
	// 	/* code */
	// }
	
	
	// int n;
	// printf("How many numbers to find the average: ");
	// scanf("%d",&n);

	// int arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	if(i==0)
	// 		printf("Enter the numbers");
	// 	scanf("%d",&arr[n-(n-i)]);
	// 	printf("The average is : %lf", average(arr));

	// }
	// for (int j = 0; j < n; j++)
	// {	
	// 	if(j==0)
	// 		printf("These are the numbers: ");
	// 	printf(" %d\n",arr[j]);

	// }
	// printf("\nThe size of the array is %lu",sizeof(arr));
	
	return 0;
}	

