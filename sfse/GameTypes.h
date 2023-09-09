#pragma once

template<typename T>
class BSSimpleList
{
public:
    struct Node
    {
        T* m_item;
        Node* m_pkNext;
    };
    Node node;
};