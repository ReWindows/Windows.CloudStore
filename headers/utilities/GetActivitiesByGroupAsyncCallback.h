#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class GetActivitiesByGroupAsyncCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetActivitiesByGroupAsyncCallback@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBVCloudStoreCollectionId@12345@@Z
    GetActivitiesByGroupAsyncCallback(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByGroupDownloadError@GetActivitiesByGroupAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnActivitiesByGroupDownloadError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivitiesByGroupDownloaded@GetActivitiesByGroupAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJGPEAPEAVICDPActivity@@@Z
    virtual long OnActivitiesByGroupDownloaded(unsigned short, ICDPActivity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivitiesByGroupAsyncCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetActivitiesByGroupAsyncCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
