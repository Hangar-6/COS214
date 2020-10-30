
#include "Storage.h"

Storage::Storage(Container* _container) {
    container = _container;
}

Container* Storage::getContainer() {
    return container;
}
