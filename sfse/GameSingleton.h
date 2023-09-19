#pragma once

template <class T>
class BSTSingletonImplicit
{
public:
	using value_type = T;
};

template <class T>
class BSTSingletonExplicit
{
public:
	using value_type = T;
};

template <class T>
struct BSTSingletonSDMOpStaticBuffer
{
public:
	using value_type = T;
};

template <class Traits>
struct BSTSingletonSDMBase :
	public Traits,
	public BSTSingletonSDMOpStaticBuffer<typename Traits::value_type>
{
public:
};

template <class T, class Buffer>
struct BSTSDMTraits
{
public:
	using value_type = T;
};

template <class T, template <class> class Buffer = BSTSingletonSDMOpStaticBuffer>
struct BSTSingletonSDM :
	public BSTSingletonSDMBase<BSTSDMTraits<T, Buffer<T>>>
{
public:
	using value_type = T;
};
