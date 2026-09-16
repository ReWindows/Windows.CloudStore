#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 1 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CurrentCache {
public:
    class Entry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_Entry@CurrentCache@Core@Cloud@Storage@Internal@Windows@@QEAA?AUEntry@123456@UCurrentCacheEntryMetadata@LocalCache@Platform@Data@6@V?$versioned@V?$tombstoned@Vschematized_data@@@@@@@Z
    WindissectOpaque Create_Entry(::Windows::Data::Platform::LocalCache::CurrentCacheEntryMetadata, WindissectOpaque);
};
} // namespace Windows::Internal::Storage::Cloud::Core
