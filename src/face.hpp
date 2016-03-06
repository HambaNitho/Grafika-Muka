#ifndef _FACE_H
#define _FACE_H

#include <vector>
#include "point.hpp"
#include "canvas.hpp"
#include "bezier.hpp"
#include "color.hpp"
#include "polygon.hpp"

class face {
public:
	face();
	void draw_face();
	void smile();

private:
	polygon rambut;
	std::vector<point> muka;
	polygon telinga_kiri;
	polygon telinga_kanan;
	polygon kacamata_kiri;
	polygon kacamata_kanan;
	polygon hidung;
	std::vector<point> mulut_atas;
	std::vector<point> mulut_tengah;
	std::vector<point> mulut_bawah;
};

#endif
