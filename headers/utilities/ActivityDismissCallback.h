#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class ActivityDismissCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissComplete@ActivityDismissCallback@Core@Cloud@Storage@Internal@Windows@@UEAAJPEBU_GUID@@J@Z
    virtual long OnDismissComplete(_GUID const *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityDismissCallback@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ActivityDismissCallback();
};
} // namespace Windows::Internal::Storage::Cloud::Core
