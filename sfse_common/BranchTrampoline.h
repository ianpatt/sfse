#pragma once

#include "sfse_common/Types.h"

class BranchTrampoline
{
public:
	BranchTrampoline();
	~BranchTrampoline();

	bool create(size_t len, void * module = nullptr);
	void destroy();
	void setBase(size_t len, void* base);

	// allocate unsized
	void * startAlloc();
	void endAlloc(const void * end);

	void * allocate(size_t size = sizeof(void *));

	size_t remain() { return m_len - m_allocated; }

	// takes 6 bytes of space at src, 8 bytes in trampoline
	bool write6Branch(uintptr_t src, uintptr_t dst);
	bool write6Call(uintptr_t src, uintptr_t dst);

	// takes 5 bytes of space at src, 14 bytes in trampoline
	bool write5Branch(uintptr_t src, uintptr_t dst);
	bool write5Call(uintptr_t src, uintptr_t dst);

private:
	// takes 6 bytes of space at src, 8 bytes in trampoline
	bool write6Branch_Internal(uintptr_t src, uintptr_t dst, u8 op);

	// takes 5 bytes of space at src, 14 bytes in trampoline
	bool write5Branch_Internal(uintptr_t src, uintptr_t dst, u8 op);

	void	* m_base;
	size_t	m_len;			// bytes
	size_t	m_allocated;	// bytes

	void	* m_curAlloc;	// currently active StartAlloc base
};

extern BranchTrampoline g_branchTrampoline;
extern BranchTrampoline g_localTrampoline;
