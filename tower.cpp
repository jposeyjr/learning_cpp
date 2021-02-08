#include "tower.h"
#include <iostream>

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

bool calculateAndPrintHeight(double initialHeight, int time)
{
    double currentHeight = calculateHeight(initialHeight, time);
    std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << "\n";

    return (currentHeight == 0.0);
}

