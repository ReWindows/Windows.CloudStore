#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 13 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CurrentCacheImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@@Z
    virtual void Delete(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesItemExist@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA_NAEBVCloudStoreItemId@23456@@Z
    virtual bool DoesItemExist(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CurrentCache@23456@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque Load(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDirect@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CurrentCache@23456@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque LoadDirect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBUEntry@CurrentCache@23456@@Z
    virtual void Save(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDirect@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBUEntry@CurrentCache@23456@@Z
    virtual void SaveDirect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveFromBlob@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEAVblob@bond@@@Z
    virtual void SaveFromBlob(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStorage@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBUEntry@CurrentCache@23456@@Z
    virtual void SaveToStorage(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryFromBond@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUEntry@CurrentCache@23456@AEBVCloudStoreItemId@23456@AEBUCurrentCacheEntry@LocalCache@Platform@Data@6@@Z
    WindissectOpaque EntryFromBond(WindissectOpaque const &, ::Windows::Data::Platform::LocalCache::CurrentCacheEntry const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryToBond@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUCurrentCacheEntry@LocalCache@Platform@Data@6@AEBUEntry@CurrentCache@23456@@Z
    ::Windows::Data::Platform::LocalCache::CurrentCacheEntry EntryToBond(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryToDirectStoreBlob@CurrentCacheImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AV?$CommonBlobStore@UDirectStoreStorageBlobBase@Core@Cloud@Storage@Internal@Windows@@@@AEBUEntry@CurrentCache@23456@@Z
    WindissectOpaque EntryToDirectStoreBlob(WindissectOpaque const &);
};
} // namespace Windows::Internal::Storage::Cloud::Core
