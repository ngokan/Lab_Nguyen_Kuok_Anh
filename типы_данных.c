#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"rus");
    double f_speed=15.27;  /*��������*/
    unsigned int uni_time=30;  /*�����*/
    int i_acceleration=9;  /*���������*/
    float df_distance;  /*����������*/
    df_distance=(f_speed*uni_time)+(1.*i_acceleration*uni_time*uni_time/2);
    printf("��������=%f\n�����=%d\n���������=%d\n����������=%f\n",f_speed,uni_time,i_acceleration,df_distance);
    return 0;
}
