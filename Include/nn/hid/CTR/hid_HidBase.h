#pragma once
#include "nn/os/os_EventBase.h"

namespace nn {
namespace hid {
namespace CTR {

    class HidBase : nn::os::EventBase {
        void *m_pResource;

        public:
        inline HidBase() {}
    };

} // namespace CTR
} // namespace hid
} // namespace nn
