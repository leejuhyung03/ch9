#include <stdio.h>

double CelToFah(double c)
{
    return 1.8*c+32;
}
double FahToCel(double f)
{
    return (f-32)/1.8;
}
int main (void)
{
    int sel;
    double num;
    printf("1.섭씨에서 화씨로2.화씨에서 섭씨로 \n");
    printf("선택하시오 1,2 ");
    scanf("%d", &sel);
    
    if(sel==1)
    {
        printf("섭씨 입력: ");
        scanf("%lf", &num);
        printf("변환된 화씨: %f \n", CelToFah(num));
    }
    else if (sel==2)
    {
        printf("화씨 입력: ");
        scanf("%lf", &num);
        printf("변환된 섭씨: %f \n", FahToCel(num));
    }
    else
    printf("입력 오류 \n");
    return 0;
}