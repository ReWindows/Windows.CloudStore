#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 33 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreBatchSaveItemData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CloudEtag@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CloudEtag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceName@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstanceName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalData@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreData@2345@@Z
    virtual long get_OriginalData(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_YoursData@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIBuffer@Streams@35@@Z
    virtual long get_YoursData(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_YoursVersion@CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_YoursVersion(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreBatchSaveItemData();
};
} // namespace Windows::Internal::Storage::Cloud
