#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 28 member(s).
class BufferOverStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BufferOverStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@BufferOverStream@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferOverStream@@QEAA@XZ
    BufferOverStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BufferOverStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BufferOverStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BufferOverStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BufferOverStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BufferOverStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@BufferOverStream@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@BufferOverStream@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stream@BufferOverStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long get_Stream(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@BufferOverStream@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferOverStream@@UEAA@XZ
    virtual ~BufferOverStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAccessPrivateBuffer@BufferOverStream@@AEAAJPEAPEAUIAccessPrivateBuffer@@@Z
    long EnsureAccessPrivateBuffer(IAccessPrivateBuffer * *);
};
