#include "RichState.h"

void RichState::createIndicator() {
    this->indicator = new RichIndicator();
}

double RichState::getIndicatorValue(Indicators* indicators) {
    indicators->setState(new ScholarState);
    return 2.5;
}