#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class ActivityStoreReaderCallbackWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivityStoreUpdated@ActivityStoreReaderCallbackWrapper@Core@Cloud@Storage@Internal@Windows@@UEAAJXZ
    virtual long OnActivityStoreUpdated();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityStoreReaderCallbackWrapper@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ActivityStoreReaderCallbackWrapper();
};
} // namespace Windows::Internal::Storage::Cloud::Core
