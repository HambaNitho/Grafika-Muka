#include <iostream>
#include "gl.hpp"

using namespace std;

int main() {
  // Rambut
  polygon rambut;
  rambut.add_point(126,540);
  rambut.add_point(126,483);
  rambut.add_point(105,420);
  rambut.add_point(147,329);
  rambut.add_point(133,238);
  rambut.add_point(329,126);
  rambut.add_point(406,112);
  rambut.add_point(574,147);
  rambut.add_point(658,217);
  rambut.add_point(672,280);
  rambut.add_point(721,364);
  rambut.add_point(735,511);
  rambut.add_point(763,420);
  rambut.add_point(749,280);
  rambut.add_point(686,161);
  rambut.add_point(588,84);
  rambut.add_point(469,28);
  rambut.add_point(357,28);
  rambut.add_point(259,63);
  rambut.add_point(161,126);
  rambut.add_point(98,203);
  rambut.add_point(56,315);
  rambut.add_point(63,420);
  rambut.add_point(84,490);

  // Muka ganteng
  std::vector<point> muka;//polygon muka;
  muka.push_back(point(161,735));
  muka.push_back(point(189,784));
  muka.push_back(point(217,833));
  muka.push_back(point(259,882));
  muka.push_back(point(308,917));
  muka.push_back(point(371,931));
  muka.push_back(point(427,938));
  muka.push_back(point(483,938));
  muka.push_back(point(532,924));
  muka.push_back(point(588,903));
  muka.push_back(point(637,861));
  muka.push_back(point(679,798));
  muka.push_back(point(707,721));
  muka.push_back(point(721,644));
  muka.push_back(point(721,560));
  muka.push_back(point(735,511));
  muka.push_back(point(721,364));
  muka.push_back(point(672,280));
  muka.push_back(point(658,217));
  muka.push_back(point(574,147));
  muka.push_back(point(476,126));
  muka.push_back(point(413,112));
  muka.push_back(point(329,126));
  muka.push_back(point(133,238));
  muka.push_back(point(147,329));
  muka.push_back(point(105,420));
  muka.push_back(point(126,483));//
  muka.push_back(point(126,553));
  muka.push_back(point(154,609));

  // Telinga
  polygon telinga_kiri;
  telinga_kiri.add_point(120,553);
  telinga_kiri.add_point(70,532);
  telinga_kiri.add_point(35,574);
  telinga_kiri.add_point(42,630);
  telinga_kiri.add_point(63,686);
  telinga_kiri.add_point(105,728);
  telinga_kiri.add_point(158,736);
  telinga_kiri.add_point(140,665);
  telinga_kiri.add_point(149,612);
  polygon telinga_kanan;
  telinga_kanan.add_point(737,520);
  telinga_kanan.add_point(788,511);
  telinga_kanan.add_point(809,560);
  telinga_kanan.add_point(795,616);
  telinga_kanan.add_point(774,679);
  telinga_kanan.add_point(741,721);
  telinga_kanan.add_point(713,700);
  telinga_kanan.add_point(733,644);
  telinga_kanan.add_point(725,560);

  // Kacamata
  polygon kacamata_kiri;
  kacamata_kiri.add_point(182,413);
  kacamata_kiri.add_point(252,399);
  kacamata_kiri.add_point(315,399);
  kacamata_kiri.add_point(378,399);
  kacamata_kiri.add_point(392,441);
  kacamata_kiri.add_point(364,483);
  kacamata_kiri.add_point(322,504);
  kacamata_kiri.add_point(266,504);
  kacamata_kiri.add_point(217,497);
  kacamata_kiri.add_point(175,462);
  polygon kacamata_kanan;
  kacamata_kanan.add_point(448,413);
  kacamata_kanan.add_point(504,385);
  kacamata_kanan.add_point(560,371);
  kacamata_kanan.add_point(623,378);
  kacamata_kanan.add_point(672,406);
  kacamata_kanan.add_point(665,448);
  kacamata_kanan.add_point(630,469);
  kacamata_kanan.add_point(588,476);
  kacamata_kanan.add_point(539,483);
  kacamata_kanan.add_point(497,483);

  // Hidung
  polygon hidung;
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
  polygon mulut;
  mulut.add_point(315,707);
  mulut.add_point(371,658);
  mulut.add_point(427,644);
  mulut.add_point(483,644);
  mulut.add_point(525,658);
  mulut.add_point(567,686);
  mulut.add_point(546,721);
  mulut.add_point(504,749);
  mulut.add_point(462,756);
  mulut.add_point(406,763);
  mulut.add_point(364,749);

  rambut.draw_stroke(300, 100, color::rgb(255,0,0));
  //muka.draw_stroke(300, 100, color::rgb(0,255,0));
  bezier bez(muka);
  bez.draw_bezier(bez.get_points(), 0xffffffff);
  telinga_kiri.draw_stroke(300, 100, color::rgb(255,0,0));
  telinga_kanan.draw_stroke(300, 100, color::rgb(255,0,0));
  kacamata_kiri.draw_stroke(300, 100, color::rgb(255,0,0));
  kacamata_kanan.draw_stroke(300, 100, color::rgb(255,0,0));
  hidung.draw_stroke(300, 100, color::rgb(255,0,0));
  mulut.draw_stroke(300, 100, color::rgb(255,0,0));

  canvas::get_instance()->render();

  return 0;
}
