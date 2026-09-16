#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 12 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudCacheInvalidatorImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloudDataChanged@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXXZ
    virtual void OnCloudDataChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudCacheInvalidatorImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudCache@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVCloudCache@23456@XZ
    WindissectOpaque & GetCloudCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCache@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVCurrentCache@23456@XZ
    WindissectOpaque & GetCurrentCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVPersistentKeyValueStore@23456@XZ
    WindissectOpaque & GetPropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessActivity@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXPEAVICDPActivity@@AEBVCorrelationVector@23456@@Z
    void ProcessActivity(ICDPActivity *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingActivityChanges@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void ProcessPendingActivityChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReset@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void ProcessReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveReaderState@CloudCacheInvalidatorImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void SaveReaderState();
};
} // namespace Windows::Internal::Storage::Cloud::Core
