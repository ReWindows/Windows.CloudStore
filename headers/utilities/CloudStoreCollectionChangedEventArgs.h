#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 18 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreCollectionChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStoreCollectionNameOverCore@@PEAU?$IVectorView@PEAVCloudStoreItemName@Cloud@Storage@Internal@Windows@@@Collections@Foundation@4@@Z
    CloudStoreCollectionChangedEventArgs(ICloudStoreCollectionNameOverCore *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionItemNames@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVCloudStoreItemName@Cloud@Storage@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long get_CollectionItemNames(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionName@CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreCollectionName@2345@@Z
    virtual long get_CollectionName(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCollectionChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCollectionChangedEventArgs();
};
} // namespace Windows::Internal::Storage::Cloud
