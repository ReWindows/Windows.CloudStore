#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class DefaultLocalStorageCollectionWatcher {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLocalStorageCollectionWatcher@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~DefaultLocalStorageCollectionWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@DefaultLocalStorageCollectionWatcher@Core@Cloud@Storage@Internal@Windows@@EEAAXXZ
    virtual void Notify();
};
} // namespace Windows::Internal::Storage::Cloud::Core
