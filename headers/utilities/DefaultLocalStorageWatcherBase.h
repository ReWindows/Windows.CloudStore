#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class DefaultLocalStorageWatcherBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@DefaultLocalStorageWatcherBase@Core@Cloud@Storage@Internal@Windows@@QEAAXPEAUHKEY__@@PEBG@Z
    void Start(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DefaultLocalStorageWatcherBase@Core@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLocalStorageWatcherBase@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~DefaultLocalStorageWatcherBase();
};
} // namespace Windows::Internal::Storage::Cloud::Core
