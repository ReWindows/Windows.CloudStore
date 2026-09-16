#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class ActivityPublishCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPublishComplete@ActivityPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJPEBU_GUID@@@Z
    virtual long OnPublishComplete(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPublishError@ActivityPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJPEBU_GUID@@J@Z
    virtual long OnPublishError(_GUID const *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityPublishCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ActivityPublishCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
