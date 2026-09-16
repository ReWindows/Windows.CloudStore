#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreBatchSaveItemDataFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CloudStoreBatchSaveItemDataFactory@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreBatchSaveItemDataFactory@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreBatchSaveItemDataFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCloudStoreBatchSaveItemData@CloudStoreBatchSaveItemDataFactory@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUICloudStoreData@2345@_KPEAUIBuffer@Streams@35@0PEAPEAUICloudStoreBatchSaveItemData@2345@@Z
    virtual long CreateCloudStoreBatchSaveItemData(HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Internal::Storage::Cloud
