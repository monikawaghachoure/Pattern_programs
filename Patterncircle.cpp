

class Patterncircle
{

public static void printPattern(int radius)
{


    double dist;

    // for horizontal movement
    for (int i = 0; i <= 2 * radius; i++)
    {

    // for vertical movement
    for (int j = 0; j <= 2 * radius; j++) {
        dist = Math.sqrt((i - radius) * (i - radius) +
                         (j - radius) * (j - radius));
        System.out.println(+dist);
        // dist should be in the range (radius - 0.5)
        // and (radius + 0.5) to print stars(*)
        if (dist > radius - 0.5 && dist < radius + 0.5)
        System.out.print("*");
        else
        System.out.print(" ");
    }
