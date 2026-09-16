#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 23 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreSchema {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreSchema@Cloud@Storage@Internal@Windows@@QEAA@AEBVEffectiveUserContext@@PEBG1@Z
    CloudStoreSchema(EffectiveUserContext const &, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEBEK@Z
    virtual long Save(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Schema@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIBuffer@Streams@35@@Z
    virtual long get_Schema(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TypeName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreSchema@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreSchema();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNameSubKey@CloudStoreSchema@Cloud@Storage@Internal@Windows@@AEAAJPEBGPEAG_K@Z
    long GetTypeNameSubKey(unsigned short const *, unsigned short *, uint64_t);
};
} // namespace Windows::Internal::Storage::Cloud
