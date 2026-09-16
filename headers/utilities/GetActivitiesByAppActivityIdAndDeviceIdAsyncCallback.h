#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByAppActivityIdAndDeviceIdDownloadError@GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnActivitiesByAppActivityIdAndDeviceIdDownloadError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByAppActivityIdAndDeviceIdDownloaded@GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJGPEAPEAVICDPActivity@@@Z
    virtual long OnActivitiesByAppActivityIdAndDeviceIdDownloaded(unsigned short, ICDPActivity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
