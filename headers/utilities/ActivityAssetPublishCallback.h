#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class ActivityAssetPublishCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAssetPublishComplete@ActivityAssetPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJXZ
    virtual long OnAssetPublishComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAssetPublishError@ActivityAssetPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJJ@Z
    virtual long OnAssetPublishError(long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityAssetPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ActivityAssetPublishCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
