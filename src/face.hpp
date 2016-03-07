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
	void sad();
	void shock();
	void reset();

private:
	std::vector<point> rambut;
	std::vector<point> muka;
	polygon telinga_kiri;
	polygon telinga_kanan;
	std::vector<point> mata_kiri_atas;
	std::vector<point> mata_kanan_atas;
	std::vector<point> mata_kiri_bawah;
	std::vector<point> mata_kanan_bawah;
	polygon hidung;
	std::vector<point> mulut_atas;
	std::vector<point> mulut_bawah;
};

#endif
