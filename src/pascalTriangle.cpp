using namespace std;

int * getPascalTriangle (int n) {
	
	int * * arr = (int **)malloc(sizeof(int) * 2 * n);

	for (int j = 0 ; j < n; j++){
		arr[j] = (int *)malloc(sizeof(int) * 2 * n);		
	}
 
  // Iterate through every line and print integer(s) in it
  for (int line = 0; line < n; line++)
  {
    // Every line has number of integers equal to line number
    for (int i = 0; i <= line; i++)
    {
      // First and last values in every row are 1
      if (line == i || i == 0)
           arr[line][i] = 1;
      else // Other values are sum of values just above and left of above
           arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
    }
  }
  return arr[n-1];
}



int main (){
	int n = 10;
	int * coba = getPascalTriangle(n);
	for (int i = 0; i < n ; i++){
		printf("%d \n", coba[i]);
	}
	return 0;
}