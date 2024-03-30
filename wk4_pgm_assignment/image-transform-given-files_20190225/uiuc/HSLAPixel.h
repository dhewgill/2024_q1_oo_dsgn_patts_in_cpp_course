/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel
  {
    public:
    double h; // Hue: [0,1]
    double s; // Saturation: [0,1]
    double l; // Luminance: [0,1]
    double a; // Alpha (blending opacity): [0,1]
    HSLAPixel(void);
  };

}
