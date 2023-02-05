#pragma once
#include "Types.h"
#include "nn/fnd/fnd_IntrusiveLinkedList.h"

namespace nn {
namespace os {

    class MemoryBlockBase : nn::fnd::IntrusiveLinkedList<MemoryBlockBase>::Item {
        u32 m_Addr;
        size_t m_Size;
        bool m_ReadOnly;
    };

} // namespace os
} // namespace nn
