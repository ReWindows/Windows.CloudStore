#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core::CurrentCache {
class Entry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Entry@CurrentCache@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBU0123456@@Z
    Entry(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Entry@CurrentCache@Core@Cloud@Storage@Internal@Windows@@QEAA@$$QEAU0123456@@Z
    Entry(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Entry@CurrentCache@Core@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~Entry();
};
} // namespace Windows::Internal::Storage::Cloud::Core::CurrentCache
