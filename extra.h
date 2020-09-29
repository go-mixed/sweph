#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define SWEX_VERSION 20903
#define SWEX_VERSION_MAJOR 2
#define SWEX_VERSION_MINOR 9
#define SWEX_VERSION_PATCH 3

double swecgo_deltat_automatic();
void swex_set_jpl_file(const char *fname);
void swex_set_jpl_file_len(const char *fname, size_t len);
void swex_set_topo(double geolon, double geolat, double geoalt);
void swex_set_sid_mode(int32_t sidm, double t0, double ayan_t0);
