#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 14 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class DefaultLocalStorageImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@@Z
    virtual void Delete(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesItemExist@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAA_NAEBVCloudStoreItemId@23456@@Z
    virtual bool DoesItemExist(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AVblob@bond@@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque Load(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromStorage@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AVblob@bond@@AEBVCloudStoreItemId@23456@@Z
    virtual WindissectOpaque LoadFromStorage(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBVblob@bond@@@Z
    virtual void Save(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDirect@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBV?$CommonBlobStore@UDirectStoreStorageBlobBase@Core@Cloud@Storage@Internal@Windows@@@@@Z
    virtual void SaveDirect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStorage@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@AEBVblob@bond@@@Z
    virtual void SaveToStorage(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~DefaultLocalStorageImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBulk@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@AEAAJAEBVCloudStoreItemId@23456@_N@Z
    long DeleteBulk(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionKeyName@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@AEAAJAEBVCloudStoreCollectionId@23456@PEAG_K@Z
    long GetCollectionKeyName(WindissectOpaque const &, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemKeyName@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@AEAAJAEBVCloudStoreItemId@23456@PEAG_K@Z
    long GetItemKeyName(WindissectOpaque const &, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DefaultLocalStorageImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXAEBUDirectStoreStorageBlobV1@23456@_K@Z
    void Validate(WindissectOpaque &, uint64_t);
};
} // namespace Windows::Internal::Storage::Cloud::Core
