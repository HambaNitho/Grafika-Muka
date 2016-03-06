#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

std::vector<int> getPascalTriangle (int n) {
	
	std::vector<std::vector<int> > arr;
	std::vector<int> prev;
  // Iterate through every line and print integer(s) in it
  for (int line = 0; line <= n; line++)  {
  	std::vector<int> temp;
    // Every line has number of integers equal to line number
    for (int i = 0; i <= line; i++)    {
      // First and last values in every row are 1
      if (line == i || i == 0)
           temp.push_back(1);
      else // Other values are sum of values just above and left of above
           temp.push_back(prev.at(i) + prev.at(i-1));
    }
    arr.push_back(temp);
    prev = arr.at(line);
  }
  return arr.at(n);

}



int main (){
	int n = 0; 
	std::vector<int> coba = getPascalTriangle(n);
	for (int i = 0; i < n+1 ; i++){ // jumlah elemen ke n sebanyak n+1
		printf("%d ", coba.at(i));
	}
	return 0;
}