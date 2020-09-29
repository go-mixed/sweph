#include "extra.h"
#include "swephexp.h"
#include "sweph.h"

double swecgo_deltat_automatic() {
	return SE_DELTAT_AUTOMATIC;
}


void swex_set_jpl_file_len(const char *fname, size_t len) {
  if (strncmp(fname, swed.jplfnam, len) != 0) {
    swe_set_jpl_file((char *)fname);
  }
}

void swex_set_jpl_file(const char *fname) {
	swex_set_jpl_file_len(fname, strlen(fname));
}

void swex_set_topo(double geolon, double geolat, double geoalt) {
#if SWEX_VERSION_MAJOR == 2 && SWEX_VERSION_MINOR < 5
  if (swed.geopos_is_set == TRUE
    && swed.topd.geolon == geolon
    && swed.topd.geolat == geolat
    && swed.topd.geoalt == geoalt
  ) {
    return;
  }
#endif

  swe_set_topo(geolon, geolat, geoalt);
}

void swex_set_sid_mode(int32_t sidm, double t0, double ayan_t0) {
  if (swed.ayana_is_set == TRUE
    && swed.sidd.sid_mode == sidm
    && swed.sidd.ayan_t0 == ayan_t0
    && swed.sidd.t0 == t0
  ) {
		return;
  }

	swe_set_sid_mode(sidm, t0, ayan_t0);
}