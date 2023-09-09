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

// 08
struct BSIntrusiveRefCounted
{
public:
	volatile u32	m_refCount;	// 00
	u32				unk04;		// 04
};
