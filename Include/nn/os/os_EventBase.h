#pragma once
#include "nn/os/os_InterruptEvent.h"

namespace nn {
namespace os {

    class EventBase : InterruptEvent {
        public:
        inline EventBase() {}
    };

} // namespace os
} // namespace nn
