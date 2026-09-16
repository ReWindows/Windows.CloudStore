#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 38 member(s).
class BufferOverBlob {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BufferOverBlob@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@BufferOverBlob@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferOverBlob@@QEAA@AEBVblob@bond@@@Z
    BufferOverBlob(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@BufferOverBlob@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BufferOverBlob@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@BufferOverBlob@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BufferOverBlob@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BufferOverBlob@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@BufferOverBlob@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@BufferOverBlob@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BufferOverBlob@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BufferOverBlob@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@BufferOverBlob@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@BufferOverBlob@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@BufferOverBlob@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@BufferOverBlob@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@BufferOverBlob@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferOverBlob@@UEAA@XZ
    virtual ~BufferOverBlob();
};
