#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class DefaultLocalStorageItemWatcher {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLocalStorageItemWatcher@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~DefaultLocalStorageItemWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@DefaultLocalStorageItemWatcher@Core@Cloud@Storage@Internal@Windows@@EEAAXXZ
    virtual void Notify();
};
} // namespace Windows::Internal::Storage::Cloud::Core
