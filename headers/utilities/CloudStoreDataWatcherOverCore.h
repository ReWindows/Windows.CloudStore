#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 17 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreDataWatcherOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@PEAVCloudStoreDataChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreDataWatcherOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreDataWatcherOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
