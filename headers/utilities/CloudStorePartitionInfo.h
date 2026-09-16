#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 19 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class CloudStorePartitionInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4PartitionKind@3456@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Metadata@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIPartitionMetadata@23456@@Z
    virtual long get_Metadata(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceId@CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourceId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStorePartitionInfo@Partitioning@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStorePartitionInfo();
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
