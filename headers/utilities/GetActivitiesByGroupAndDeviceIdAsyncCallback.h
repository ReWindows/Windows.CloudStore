#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class GetActivitiesByGroupAndDeviceIdAsyncCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetActivitiesByGroupAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBVCloudStoreCollectionId@12345@@Z
    GetActivitiesByGroupAndDeviceIdAsyncCallback(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByGroupAndDeviceIdDownloadError@GetActivitiesByGroupAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnActivitiesByGroupAndDeviceIdDownloadError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByGroupAndDeviceIdDownloaded@GetActivitiesByGroupAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJGPEAPEAVICDPActivity@@@Z
    virtual long OnActivitiesByGroupAndDeviceIdDownloaded(unsigned short, ICDPActivity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivitiesByGroupAndDeviceIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetActivitiesByGroupAndDeviceIdAsyncCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
