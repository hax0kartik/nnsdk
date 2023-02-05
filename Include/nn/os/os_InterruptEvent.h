#pragma once
#include "nn/os/os_WaitObject.h"

namespace nn {
namespace os {

    class InterruptEvent : WaitObject {
        public:
        InterruptEvent() {}
    };

} // namespace os
} // namespace nn
