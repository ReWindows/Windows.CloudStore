#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 21 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreData@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStoreItemName@1234@AEBV?$versioned@Vschematized_data@@@@_N@Z
    CloudStoreData(WindissectOpaque *, WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CloudData@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CloudData(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIBuffer@Streams@35@@Z
    virtual long get_Data(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemName@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreItemName@2345@@Z
    virtual long get_ItemName(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudStoreDataStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@CloudStoreData@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreData@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreData();
};
} // namespace Windows::Internal::Storage::Cloud
