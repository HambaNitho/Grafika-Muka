#include <iostream>
#include "gl.hpp"

using namespace std;

int main() {

    face Face;

    Face.draw_face();
    canvas::get_instance()->render();
    
    sleep(5);
    canvas::get_instance()->clear();

    Face.smile();
    Face.draw_face();
    canvas::get_instance()->render();

  return 0;
}
