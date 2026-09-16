#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 48 member(s).
namespace Windows::Internal::Storage::Cloud {
class BufferOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferOverCore@Cloud@Storage@Internal@Windows@@QEAA@AEBVschematized_data@@@Z
    BufferOverCore(schematized_data const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAU6@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unwrap@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAAEBVschematized_data@@XZ
    virtual schematized_data const & Unwrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@BufferOverCore@Cloud@Storage@Internal@Windows@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~BufferOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
