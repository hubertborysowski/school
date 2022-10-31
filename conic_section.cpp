//The main concept of this program is to cout the values of x and/or y from cartesian coordinates system.

#include <iostream>
#include <cmath>

void circle();      //e=0           | value of Eccentricity
void ellipse();     //e>0 && e<1    | value of Eccentricity
void parabola();    //e=1           | value of Eccentricity
void hyperbola();   //e>1           | value of Eccentricity

int main()
{
    double Eccentricity;

    std::cout<<"Instert the value of eccentricity (greater or equal to 0): ";
    std::cin>>Eccentricity;

    //If the entered number is double continue the program, otherwise send the error message and exit.
    if(!std::cin)
    {
        std::cout<<"Fatal error!";
        std::exit(0);
    }
    std::cin.clear();

    //If the entered number is less than 0 send the error message and exit, otherwise continue the program.
    if(Eccentricity<0) 
    {
        std::cout<<"\nEccentricity value cannot be set below zero!";
        std::exit(0);
    }
    else
    {
        if(Eccentricity==0)
        {
            //The function for the circle coordinates.
            circle();  
        }
        else
        {
            if(Eccentricity>0 && Eccentricity<1)
            {
                //The function for the ellipse coordinates.
                ellipse();
            }
            else
            {
                if(Eccentricity==1)
                {
                    //The function for the parabola coordinates.
                    parabola();
                }
                else
                {
                    if(Eccentricity>1)
                    {
                        //The function for the hyperbola coordinates.
                        hyperbola(); 
                    }
                }
            }
        }
    }

    return 0;
}

void circle()
{
    std::cout<<"\nCirlce.";
}

void ellipse()
{
    std::cout<<"\nEllipse.";
}
void parabola()
{
    std::cout<<"\nParabola.";
}

void hyperbola()
{
    std::cout<<"\nHyperbola.";
}