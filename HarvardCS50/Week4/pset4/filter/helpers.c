#include "helpers.h"
#include <math.h>
//to run program ./filter -g infile.bmp outfile.bmp
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {

        for(int j = 0; j < width; j++)
        {
            int blue = image[i][j].rgbtBlue;
            int green = image[i][j].rgbtGreen;
            int red = image[i][j].rgbtRed;
            //floating point integer used to capture divisor float operand which is a decimal
            float avgRGB = (red + green + blue) / 3.0;
            int returnAverage = round(avgRGB);

            image[i][j].rgbtBlue = returnAverage;
            image[i][j].rgbtGreen = returnAverage;
            image[i][j].rgbtRed = returnAverage;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float blue = image[i][j].rgbtBlue;
            float green = image[i][j].rgbtGreen;
            float red = image[i][j].rgbtRed;

            int sepiaBlue = round((0.272 * red) + (0.534 * green) + (0.131 * blue));
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            int sepiaGreen = round((0.349 * red) + (0.686 * green) + (0.168 * blue));
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            int sepiaRed = round((0.393 * red) + (0.769 * green) + (0.189 * blue));
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            image[i][j].rgbtBlue = sepiaBlue;

            image[i][j].rgbtGreen = sepiaGreen;

            image[i][j].rgbtRed = sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
