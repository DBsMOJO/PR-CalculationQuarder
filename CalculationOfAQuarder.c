/*--------------------------------------------------------------
 *				HTBLA-Leonding / Class: <CLASSNAME>
 *--------------------------------------------------------------
 *              Daniel Binder, 12.12.2023
 *--------------------------------------------------------------
 * Description:
 * Calculation of a quarder's base area, shell, surface and
 * volume by entering length, width and height.
 *--------------------------------------------------------------
 */

#include <stdio.h>

int main() {
  double length, width, height, area, lateralSurface, surface, volume;

  // Input
  printf("Entering the lenght: ");
  scanf("%lf", &length);

  printf("Entering the width: ");
  scanf("%lf", &width);

  printf("Entering the height: ");
  scanf("%lf", &height);

  // Processing
  area = length * width;
  lateralSurface = 2 * (length + width) * height;
  surface = lateralSurface + 2 * area;
  volume = area * height;

  // Output
  printf("Area: %lf\n", area);
  printf("Lateral Surface: %lf\n", lateralSurface);
  printf("Surface: %lf\n", surface);
  printf("Volume: %lf\n", volume);
}
