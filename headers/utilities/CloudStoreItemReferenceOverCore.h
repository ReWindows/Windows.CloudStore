#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 29 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreItemReferenceOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionName@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CollectionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceName@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstanceName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PartitionName@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PartitionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TypeName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreItemReferenceOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreItemReferenceOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
