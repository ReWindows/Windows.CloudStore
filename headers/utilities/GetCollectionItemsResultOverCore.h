#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 29 member(s).
namespace Windows::Internal::Storage::Cloud {
class GetCollectionItemsResultOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCloudStoreData@Cloud@Storage@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResultCode@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAJ@Z
    virtual long get_ResultCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RetryAfter@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_RetryAfter(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SyncToken@GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SyncToken(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCollectionItemsResultOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetCollectionItemsResultOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
