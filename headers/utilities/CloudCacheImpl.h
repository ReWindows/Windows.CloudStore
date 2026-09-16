#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudCacheImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@W4ChangeKind@23456@@Z
    virtual void Delete(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CloudCache@23456@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque Load(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBUEntry@CloudCache@23456@W4ChangeKind@23456@@Z
    virtual void Save(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudCacheImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryFromBond@CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUEntry@CloudCache@23456@AEBVCloudStoreItemId@23456@AEBUCloudCacheEntry@LocalCache@Platform@Data@6@@Z
    WindissectOpaque EntryFromBond(WindissectOpaque const &, ::Windows::Data::Platform::LocalCache::CloudCacheEntry const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryToBond@CloudCacheImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUCloudCacheEntry@LocalCache@Platform@Data@6@AEBUEntry@CloudCache@23456@@Z
    ::Windows::Data::Platform::LocalCache::CloudCacheEntry EntryToBond(WindissectOpaque const &);
};
} // namespace Windows::Internal::Storage::Cloud::Core
