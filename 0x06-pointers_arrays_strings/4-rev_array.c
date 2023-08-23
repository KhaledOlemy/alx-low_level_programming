/**
 * reverse_array- this function  revereses the order of items inside
 * an array
 * @a: this is the input array
 * @n: this is the length of the array
*/
void reverse_array(int *a, int n)
{
	int i, temp;
	int *ptr1, *ptr2;

	for (i = 0; i < n / 2; i++)
	{
		ptr1 = &a[i];
		ptr2 = &a[n - i - 1];
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	}
}
