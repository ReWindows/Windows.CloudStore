#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 18 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreItemName {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionName@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreCollectionName@2345@@Z
    virtual long get_CollectionName(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceName@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstanceName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TypeName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreItemName@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreItemName();
};
} // namespace Windows::Internal::Storage::Cloud
