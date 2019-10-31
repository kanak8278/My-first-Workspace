#include <stdio.h>
int main()
{

const double cw = 4.19;
const double ci= 2.09;
const double eIce= 335;


double mass_water;
double mass_ice;
double total_mass;
double temp_water;
double temp_ice;
double energy_released;
double energy_absorb;
double net_extra;
while (1)
{
scanf("%lf", &mass_water);
scanf("%lf", &mass_ice);
scanf("%lf", &temp_water);
scanf("%lf", &temp_ice);

if(mass_ice==0 && mass_water==0 && temp_ice==0 && temp_water==0)
break;
total_mass = mass_ice+mass_water;
double temp1 = (temp_water-0);
double temp2 = (0- temp_ice);

energy_released = mass_water*cw*temp1;
energy_absorb = (mass_ice*temp2*ci)+(mass_ice*eIce);

//extra energy
if (energy_released >= energy_absorb)
{
    net_extra = energy_released - energy_absorb;
    double finaltemp = net_extra/(total_mass*cw);
    double leftwater = total_mass;
    double leftice = total_mass-total_mass;
    printf("%0.1f g of ice and %0.1f g of water at %0.1f C\n", leftice, leftwater, finaltemp);

 }
else {
    net_extra = energy_absorb - energy_released;

    if(net_extra >= total_mass*eIce )
    {
        double leftenergy = net_extra - (total_mass*eIce);
        double finaltemp = leftenergy/(total_mass*ci);
        double leftwater = total_mass - total_mass;
        double leftice = total_mass;
        printf("%0.1f g of ice and %0.1f g of water at %0.1f C\n", leftice, leftwater, -finaltemp);
    }
    else
    {
        double finaltemp = 0;
        double leftice = net_extra/eIce;
        double leftwater = total_mass - leftice;
        printf("%0.1f g of ice and %0.1f g of water at %0.1f C\n", leftice, leftwater, finaltemp);
    }
} 
}

return 0;

}

