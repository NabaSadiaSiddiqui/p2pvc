#ifndef DISPLAY_H
#define DISPLAY_H

#include <ncurses.h>

void init_screen(void);
void end_screen(void);
int draw_image(char *data, int width, int height, int step, int channels);
int write_bandwidth(char *bandstr, int bandlen, int width, int height);

#endif /* DISPLAY_H */
