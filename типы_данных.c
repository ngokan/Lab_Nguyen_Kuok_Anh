#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    double f_speed=15.27;  /*скорость*/
    unsigned int uni_time=30;  /*время*/
    int i_acceleration=9;  /*ускорение*/
    float df_distance;  /*расстояние*/
    df_distance=(f_speed*uni_time)+(1.*i_acceleration*uni_time*uni_time/2);
    printf("скорость=%f\nвремя=%d\nускорение=%d\nрасстояние=%f\n",f_speed,uni_time,i_acceleration,df_distance);
    return 0;
}
