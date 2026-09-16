#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 19 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class CloudStorePartitionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStore@2345@@Z
    CloudStorePartitionManager(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartitionSet@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@3456@PEAPEAUICloudStorePartitionSet@23456@@Z
    virtual long GetPartitionSet(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStorePartitionManager@Partitioning@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStorePartitionManager();
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
