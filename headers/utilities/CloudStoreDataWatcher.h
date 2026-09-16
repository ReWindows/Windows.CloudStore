#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 24 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreDataWatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataChanged@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@QEAAJPEAUIInspectable@@0@Z
    long OnDataChanged(IInspectable *, IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@PEAVCloudStoreDataChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreDataWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWatchingOrNotWatching@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long EnsureWatchingOrNotWatching();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInitialEvents@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJPEAU?$ITypedEventHandler@PEAVCloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@PEAVCloudStoreDataChangedEventArgs@2345@@Foundation@5@@Z
    long NotifyInitialEvents(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotifyCachedDataTask@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJPEAU?$ITypedEventHandler@PEAVCloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@PEAVCloudStoreDataChangedEventArgs@2345@@Foundation@5@@Z
    long OnNotifyCachedDataTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotifyChangeTask@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long OnNotifyChangeTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadAndCache@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJ_NPEAPEAUICloudStoreData@2345@@Z
    long ReloadAndCache(bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadCacheAndGenerateChangeArgs@CloudStoreDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJ_NW4CloudDataChangeKinds@2345@PEAPEAUICloudStoreDataChangedEventArgs@2345@@Z
    long ReloadCacheAndGenerateChangeArgs(bool, int, WindissectOpaque * *);
};
} // namespace Windows::Internal::Storage::Cloud
