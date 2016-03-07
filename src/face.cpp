#include "face.hpp"

face::face() {
	reset();
}
	
void face::draw_face() {
	// Bezier
	bezier Mulut_atas(mulut_atas);
	bezier Mulut_bawah(mulut_bawah);
	bezier Muka(muka);
	bezier Rambut(rambut);
	bezier Mata_kiri_atas(mata_kiri_atas);
	bezier Mata_kanan_atas(mata_kanan_atas);
	bezier Mata_kiri_bawah(mata_kiri_bawah);
	bezier Mata_kanan_bawah(mata_kanan_bawah);

	double t = 0.01f;
	Mulut_atas.draw_bezier(Mulut_atas.get_points(), t, color::rgb(255,0,0));
	Mulut_bawah.draw_bezier(Mulut_bawah.get_points(), t, color::rgb(255,0,0));
	Muka.draw_bezier(Muka.get_points(), t, 0xffffffff);
	Rambut.draw_bezier(Rambut.get_points(), t, 0xffffffff);
	Mata_kiri_atas.draw_bezier(Mata_kiri_atas.get_points(), t, 0xffffffff);
	Mata_kanan_atas.draw_bezier(Mata_kanan_atas.get_points(), t, 0xffffffff);
	Mata_kiri_bawah.draw_bezier(Mata_kiri_bawah.get_points(), t, 0xffffffff);
	Mata_kanan_bawah.draw_bezier(Mata_kanan_bawah.get_points(), t, 0xffffffff);

	// Polygon
	/*
	telinga_kiri.draw_stroke(300, 100, color::rgb(255,0,0));
	telinga_kanan.draw_stroke(300, 100, color::rgb(255,0,0));
	hidung.draw_stroke(300, 100, color::rgb(255,0,0));*/
}

void face::smile() {
	mulut_atas.clear();
	mulut_atas.push_back(point(230,280));
	mulut_atas.push_back(point(300,290));
	mulut_atas.push_back(point(370,280));

	mulut_bawah.clear();
	mulut_bawah.push_back(point(230,280));
	mulut_bawah.push_back(point(300,320));
	mulut_bawah.push_back(point(370,280));
}

void face::sad() {
	mata_kiri_atas.clear();
	mata_kiri_atas.push_back(point(140,160));
	mata_kiri_atas.push_back(point(180,110));
	mata_kiri_atas.push_back(point(220,160));

	mata_kiri_bawah.clear();
	mata_kiri_bawah.push_back(point(140,160));
	mata_kiri_bawah.push_back(point(180,190));
	mata_kiri_bawah.push_back(point(220,160));

	mata_kanan_atas.clear();
	mata_kanan_atas.push_back(point(380,160));
	mata_kanan_atas.push_back(point(420,110));
	mata_kanan_atas.push_back(point(460,160));

	mata_kanan_bawah.clear();
	mata_kanan_bawah.push_back(point(380,160));
	mata_kanan_bawah.push_back(point(420,190));
	mata_kanan_bawah.push_back(point(460,160));

	mulut_atas.clear();
	mulut_atas.push_back(point(250,320));
	mulut_atas.push_back(point(300,280));
	mulut_atas.push_back(point(350,320));

	mulut_bawah.clear();
	mulut_bawah.push_back(point(250,320));
	mulut_bawah.push_back(point(300,310));
	mulut_bawah.push_back(point(350,320));
}

void face::shock() {
	mulut_atas.clear();
	mulut_atas.push_back(point(250,300));
	mulut_atas.push_back(point(260,200));
	mulut_atas.push_back(point(340,200));
	mulut_atas.push_back(point(350,300));

	mulut_bawah.clear();
	mulut_bawah.push_back(point(250,300));
	mulut_bawah.push_back(point(270,325));
	mulut_bawah.push_back(point(300,325));
	mulut_bawah.push_back(point(330,325));
	mulut_bawah.push_back(point(350,300));
}

void face::reset() {
	// Rambut
	rambut.clear();
	rambut.push_back(point(100,100));
	rambut.push_back(point(200,0));
	rambut.push_back(point(400,0));
	rambut.push_back(point(500,100));

	// Muka
	muka.clear();
	muka.push_back(point(100,100));
	muka.push_back(point(100,160));
	muka.push_back(point(110,300));
	muka.push_back(point(200,500));
	muka.push_back(point(300,580));
	muka.push_back(point(400,500));
	muka.push_back(point(490,300));
	muka.push_back(point(500,160));
	muka.push_back(point(500,100));

	// Telinga
	telinga_kiri.add_point(120,553);
	telinga_kiri.add_point(70,532);
	telinga_kiri.add_point(35,574);
	telinga_kiri.add_point(42,630);
	telinga_kiri.add_point(63,686);
	telinga_kiri.add_point(105,728);
	telinga_kiri.add_point(158,736);
	telinga_kiri.add_point(140,665);
	telinga_kiri.add_point(149,612);

	telinga_kanan.add_point(737,520);
	telinga_kanan.add_point(788,511);
	telinga_kanan.add_point(809,560);
	telinga_kanan.add_point(795,616);
	telinga_kanan.add_point(774,679);
	telinga_kanan.add_point(741,721);
	telinga_kanan.add_point(713,700);
	telinga_kanan.add_point(733,644);
	telinga_kanan.add_point(725,560);

	// Mata
	mata_kiri_atas.clear();
	mata_kiri_atas.push_back(point(140,150));
	mata_kiri_atas.push_back(point(180,110));
	mata_kiri_atas.push_back(point(220,150));
	mata_kiri_bawah.clear();
	mata_kiri_bawah.push_back(point(140,150));
	mata_kiri_bawah.push_back(point(180,190));
	mata_kiri_bawah.push_back(point(220,150));

	mata_kanan_atas.clear();
	mata_kanan_atas.push_back(point(380,150));
	mata_kanan_atas.push_back(point(420,110));
	mata_kanan_atas.push_back(point(460,150));
	mata_kanan_bawah.clear();
	mata_kanan_bawah.push_back(point(380,150));
	mata_kanan_bawah.push_back(point(420,190));
	mata_kanan_bawah.push_back(point(460,150));

	// Hidung
	hidung.add_point(420,413);
	hidung.add_point(455,448);
	hidung.add_point(469,497);
	hidung.add_point(504,532);
	hidung.add_point(532,581);
	hidung.add_point(497,609);
	hidung.add_point(448,609);
	hidung.add_point(406,609);
	hidung.add_point(357,609);
	hidung.add_point(343,560);
	hidung.add_point(371,518);
	hidung.add_point(399,462);

	// Mulut
	mulut_atas.clear();
	mulut_atas.push_back(point(250,300));
	mulut_atas.push_back(point(300,280));
	mulut_atas.push_back(point(350,300));

	mulut_bawah.clear();
	mulut_bawah.push_back(point(250,300));
	mulut_bawah.push_back(point(300,320));
	mulut_bawah.push_back(point(350,300));
}