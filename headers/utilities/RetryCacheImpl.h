#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class RetryCacheImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@RetryCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@@Z
    virtual void Delete(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@RetryCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@RetryCache@23456@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque Load(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@RetryCacheImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBUEntry@RetryCache@23456@@Z
    virtual void Save(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace Windows::Internal::Storage::Cloud::Core
