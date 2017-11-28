/**  Kevin Griffin
 * \ Exercise 10
 * \ 555 timer Astable multivib calculator
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


/** main function */
int main(void)
{
   /** Variable Declerations */
    double R1 = 0, R2 = 0, C1 = 0, freq, Duty;
    double *freq_ptr, *Duty_ptr;

    /**initialize pointers */
    freq_ptr = &freq;
    Duty_ptr = &Duty;

    /** local function declaration*/
    void timer555(double *, double *, double, double, double);

    /** printed on screen telling the user what the program is doing */
    cout << "\n 555 Timer Calculations "<< endl;

    /**while loop to ensure R1 is not less than or equal to zero */
    while (R1<=0)
    {
        cout <<"\n Enter a value for res 1: ";
        cin >> R1;
    }

    /** while loop to ensure R2 is not less than or equal to zero */
    while (R2<=0)
    {
        cout <<"\n Enter a value for res 2: ";
        cin >> R2;
    }

    /** while loop to ensure C1 is not less than or equal to zero */
    while (C1<=0)
    {
        cout <<"\n Enter a value for Capacitor: ";
        cin >> C1;
    }

    timer555(freq_ptr, Duty_ptr, R1, R2, C1);

    /**display the pointer values and addresses to the user */

    cout << "\n Frequency output is : " << *freq_ptr << "Hz" << endl;

    cout << "\n Duty Cycle : \t" << *Duty_ptr << "%" << endl;

    return 0;
}

/**555 Timer Function */
void timer555(double *freq, double *Duty, double R1, double R2, double C1)
{
    /**equation to clculate the freq*/
    *freq =1.44 / ((R1 + 2 * R2) * C1);
    /**duty cycle equation*/
    *Duty = (R1 + R2) / (R1 + (2 * R2));

    return;
}
