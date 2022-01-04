#include "ScholarState.h"
#include "../headers/Indicators.h"
class Indicators;

void ScholarState::createIndicator() {
    this->indicator = new ScholarIndicator();
}

double ScholarState::getIndicatorValue(Indicators* indicators) {
    indicators->setState(new SizeState);
    return 1.5;
}
