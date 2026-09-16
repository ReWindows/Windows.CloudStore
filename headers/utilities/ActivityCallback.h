#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class ActivityCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivityCallback@Core@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ActivityCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@ActivityCallback@Core@Cloud@Storage@Internal@Windows@@QEAAJAEBU_GUID@@J@Z
    long OnComplete(_GUID const &, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCompletion@ActivityCallback@Core@Cloud@Storage@Internal@Windows@@QEAAJPEAU_GUID@@@Z
    long WaitForCompletion(_GUID *);
};
} // namespace Windows::Internal::Storage::Cloud::Core
