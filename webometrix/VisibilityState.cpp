#include "VisibilityState.h"

void VisibilityState::createIndicator() {
    this->indicator = new VisibilityIndicator();
}

double VisibilityState::getIndicatorValue(Indicators* indicators) {
    return 0.5;
}
