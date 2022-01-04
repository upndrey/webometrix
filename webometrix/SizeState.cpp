#include "SizeState.h"
#include "../headers/Indicators.h"
class Indicators;


void SizeState::createIndicator() {
    this->indicator = new SizeIndicator();
}

double SizeState::getIndicatorValue(Indicators* indicators) {
    indicators->setState(new VisibilityState);
    return 3.5;
}
