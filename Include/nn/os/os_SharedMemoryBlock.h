#pragma once
#include "Types.h"
#include "nn/os/os_MemoryBlockBase.h"
#include "nn/os/os_HandleObject.h"

namespace nn {
namespace os {

    class SharedMemoryBlock : MemoryBlockBase, HandleObject {
        bool m_SpaceAllocated;
    };

} // namespace os
} // namespace nn
