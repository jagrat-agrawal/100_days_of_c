/*
 * Day 82 | Question 132
 * Define an enum for traffic lights and print Stop, Wait, or Go based on the entered value.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[20]; enum TrafficLight light;
    if (scanf("%19s", input) != 1) return 0;
    if (strcmp(input, "RED") == 0) light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0) light = GREEN;
    else { puts("Invalid traffic light"); return 0; }
    switch (light) { case RED: puts("Stop"); break; case YELLOW: puts("Wait"); break; case GREEN: puts("Go"); break; }
    return 0;
}
