#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 27 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreCollectionNameOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unwrap@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAAEBVCloudStoreCollectionId@Core@2345@XZ
    virtual WindissectOpaque const & Unwrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomName@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CustomName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PartitionName@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PartitionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreCollectionNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TypeName(HSTRING__* *);
};
} // namespace Windows::Internal::Storage::Cloud
