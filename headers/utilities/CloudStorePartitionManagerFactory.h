#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class CloudStorePartitionManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CloudStorePartitionManagerFactory@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStorePartitionManagerFactory@Partitioning@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStorePartitionManagerFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CloudStorePartitionManagerFactory@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUICloudStore@3456@PEAPEAUICloudStorePartitionManager@23456@@Z
    virtual long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
