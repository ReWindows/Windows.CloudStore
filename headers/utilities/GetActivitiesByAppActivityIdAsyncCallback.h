#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class GetActivitiesByAppActivityIdAsyncCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetActivitiesByAppActivityIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBVCloudStoreItemId@12345@@Z
    GetActivitiesByAppActivityIdAsyncCallback(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByAppActivityIdDownloadError@GetActivitiesByAppActivityIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnActivitiesByAppActivityIdDownloadError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByAppActivityIdDownloaded@GetActivitiesByAppActivityIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJGPEAPEAVICDPActivity@@@Z
    virtual long OnActivitiesByAppActivityIdDownloaded(unsigned short, ICDPActivity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivitiesByAppActivityIdAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetActivitiesByAppActivityIdAsyncCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
