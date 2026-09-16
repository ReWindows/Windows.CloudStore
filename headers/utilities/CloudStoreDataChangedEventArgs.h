#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 19 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreDataChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStoreItemName@1234@PEAUICloudStoreData@1234@W4CloudDataChangeKinds@1234@@Z
    CloudStoreDataChangedEventArgs(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeKind@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudDataChangeKinds@2345@@Z
    virtual long get_ChangeKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataItem@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreData@2345@@Z
    virtual long get_DataItem(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreItemName@2345@@Z
    virtual long get_Name(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreDataChangedEventArgs@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreDataChangedEventArgs();
};
} // namespace Windows::Internal::Storage::Cloud
