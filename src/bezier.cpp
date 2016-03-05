#include "bezier.hpp"

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


void bezier::draw_bezier(std::vector<point> points, uint32_t color) {
	
	int i, x, y;
	float t = 0.01f;
	int n = points.size();
	std::vector<int> pascal;// = pascal_triangle(n);
	
	while (t <= 1) {
		x = 0; y = 0;
		for (i = 0; i < n; i++) {
			x += points[i].get_x() * pascal[i] * pow((i - t),(n - i)) * pow(t, i);
			y += points[i].get_y() * pascal[i] * pow((i - t),(n - i)) * pow(t, i);
		}
		//draw_pixel(x, y, color);
		t += 0.01;
	}

}

//void bezier::draw_bezier(uint32_t color);
