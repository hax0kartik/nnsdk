#pragma once

namespace nn {
namespace fnd {

template<typename T>
class IntrusiveLinkedList {
    public:
    class Item;
    Item *m_Head;
};

template<typename T>
class IntrusiveLinkedList<T>::Item {
    Item* m_PreviousLink;
    Item* m_NextLink;
};

} // namespace fnd
} // namespace nn
