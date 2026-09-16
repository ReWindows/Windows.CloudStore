#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace CloudCacheInvalidatorServiceImpl {
class CDPActivityStoreInfoWatcherCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityStoreAdded@CDPActivityStoreInfoWatcherCallback@CloudCacheInvalidatorServiceImpl@@UEAAJPEAVICDPActivityStoreInfo@@@Z
    virtual long OnActivityStoreAdded(ICDPActivityStoreInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityStoreRemoved@CDPActivityStoreInfoWatcherCallback@CloudCacheInvalidatorServiceImpl@@UEAAJPEAVICDPActivityStoreInfo@@@Z
    virtual long OnActivityStoreRemoved(ICDPActivityStoreInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDPActivityStoreInfoWatcherCallback@CloudCacheInvalidatorServiceImpl@@UEAA@XZ
    virtual ~CDPActivityStoreInfoWatcherCallback();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNotifyActivityStoresChanged@CDPActivityStoreInfoWatcherCallback@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void TryNotifyActivityStoresChanged();
};
} // namespace CloudCacheInvalidatorServiceImpl
