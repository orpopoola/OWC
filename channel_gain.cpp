#include <math.h>
/*
    This file is used to compute the wireless optical channel gain between an optical transmitter and an optical receiver
    It takes in the Area of receiver A, Lambertian order m, LOS distance d, Gain of optical filter T_s, gain of optical concentrator g, 


*/
double conc_gain(double ref_idx,double inc_angle, int fov)
{
    return ((0<= inc_angle)&&(inc_angle<=fov))?ref_idx*ref_idx/(sin(fov)*sin(fov)):0;
}