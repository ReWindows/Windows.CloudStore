#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 27 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreItemNameOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unwrap@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAAEBVCloudStoreItemId@Core@2345@XZ
    virtual WindissectOpaque const & Unwrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionName@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreCollectionName@2345@@Z
    virtual long get_CollectionName(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceName@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstanceName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreItemNameOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TypeName(HSTRING__* *);
};
} // namespace Windows::Internal::Storage::Cloud
