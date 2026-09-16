#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 17 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreCollectionWatcherOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCloudStoreCollectionWatcher@Cloud@Storage@Internal@Windows@@PEAVCloudStoreCollectionChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCollectionWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCollectionWatcherOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
