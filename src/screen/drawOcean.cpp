#include <ftxui/screen/screen.hpp>
#include "drawOcean.hpp"

void drawOcean(ftxui::Screen &screen, int height) {

  for (int y = screen.dimy() - height; y < screen.dimy(); y++) {
    for (int x = 0; x < screen.dimx(); x++) {
      auto &pixel = screen.PixelAt(x, y);
      pixel.character = "0";
      pixel.background_color = ftxui::Color::Black;
      pixel.foreground_color = ftxui::Color::Blue;
      pixel.bold = true;
    }
  }
}