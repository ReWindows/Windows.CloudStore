#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::CloudStore {
class DataForLog {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataForLog@CloudStore@Cloud@Storage@Internal@Windows@@QEAA@_KVblob@bond@@@Z
    DataForLog(uint64_t, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataForLog@CloudStore@Cloud@Storage@Internal@Windows@@QEAA@_KI@Z
    DataForLog(uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataForLog@CloudStore@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~DataForLog();
};
} // namespace Windows::Internal::Storage::Cloud::CloudStore
