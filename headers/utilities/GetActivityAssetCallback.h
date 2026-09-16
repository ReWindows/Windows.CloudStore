#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class GetActivityAssetCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAssetDownloadError@GetActivityAssetCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnAssetDownloadError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAssetDownloaded@GetActivityAssetCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJPEAVICDPActivityAsset@@@Z
    virtual long OnAssetDownloaded(ICDPActivityAsset *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetActivityAssetCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~GetActivityAssetCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
