# include<stdio.h>
int main()
{
    /*const double cw = 4.19;
    const double ci= 2.09;
    const double eIce= 335;

    double Mwater, Mice, tempIce, tempW, totalW;
    scanf("%lf", &Mwater);
    scanf("%lf", &Mice);
    scanf("%lf", &tempW);
    scanf("%lf", &tempIce);
    totalW= Mice+ Mwater;
    printf("%lf\n", totalW);
    //first change everything into 0C water.
    double netEnergy= (Mwater*tempW*cw)-(Mice*(0-tempIce)*ci + Mice*eIce);
    printf("%lf\n\n", netEnergy);
    if (netEnergy==0){
        printf("I m here1\n");
        printf("%lf\n\n", totalW);
        printf("0.00gm of ice and %lfgm of water at 0 C ", (totalW));
    }
    else if(netEnergy<0)
    {
        printf("I m here2\n");
        printf("%lf\n", totalW);
        double finaltemp= netEnergy/(cw*totalW);
        printf("0.00 g of ice and %lf g of water at %lf C", totalW, finaltemp);
    }
    else if(netEnergy>0)
    {
        printf("I m here3\n\n");
        if(netEnergy/eIce < totalW)
        {
            printf("I m here4\n\n");
            double leftice = (netEnergy/eIce);
            double leftwater = totalW -(netEnergy/eIce);
            printf("%lf g of ice and %lf g of water at 0 C", leftice, leftwater);
        }

        if (netEnergy/eIce >= totalW)
        {
            printf("I m here5");
            double finaltemp= (netEnergy- eIce*totalW)/(ci*totalW);
            printf("%lf g of ice and 0 g of water at %lf C", totalW, finaltemp );
        }
        
    }*/
    return  0;
}