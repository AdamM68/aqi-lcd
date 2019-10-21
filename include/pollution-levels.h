#include "model.h"

static const int PM25_LEVELS[] = {0, 15, 30, 55, 110, 32768};
static const int PM10_LEVELS[] = {0, 25, 50, 90, 180, 32768};
static const int PM25_MAX = 25;
static const int PM10_MAX = 50;

int getIndex(const JsonModel *model);