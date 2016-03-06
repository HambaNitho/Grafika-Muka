#include "bezier.hpp"
#include "canvas.hpp"

// Constructor
bezier::bezier() {
	point p1(0, 0);
	point p2(100, 0);
	points.push_back(p1);
	points.push_back(p2);
}
bezier::bezier(std::vector<point> points) {
	this->points = points;
}

// Setter and getter
std::vector<point> bezier::get_points() {
	return points;
}
bool bezier::is_surface() {
	return (points[0].get_x() == points[points.size()].get_x()) && (points[0].get_y() == points[points.size()].get_y());
}
void bezier::set_points(std::vector<point> points) {
	this->points = points;
}

// Transformasi
void bezier::add_point(point p, int position) {
	points.insert(points.begin() + position, p);
}
void bezier::delete_point(int position) {
	points.erase(points.begin() + position);
}
void bezier::move_point(int position, int delta_x, int delta_y, int delta_z) {
	points[position].move(delta_x, delta_y, delta_z);
}

int * bezier::getPascalTriangle (int n) {
	
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

void bezier::draw_bezier(std::vector<point> points, uint32_t color) {
	
	int i, x, y;
	float t = 0.01f;
	int n = points.size();
	int* pascal = getPascalTriangle(n);
	
	while (t <= 1) {
		x = 0; y = 0;
		for (i = 0; i < n; i++) {
			x += points[i].get_x() * pascal[i] * pow((i - t),(n - i)) * pow(t, i);
			y += points[i].get_y() * pascal[i] * pow((i - t),(n - i)) * pow(t, i);
		}
		canvas::get_instance()->draw_pixel(x, y, color);
		t += 0.01;
	}

}

//void bezier::draw_bezier(uint32_t color);
