#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 29 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class CloudStorePartitionSet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStore@2345@W4PartitionKind@2345@@Z
    CloudStorePartitionSet(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePartition@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUICloudStorePartitionInfo@23456@@Z
    virtual long CreatePartition(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePartition@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeletePartition(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartitionInfo@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICloudStorePartitionInfo@23456@@Z
    virtual long GetPartitionInfo(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActiveChanged@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@PEAVActivePartitionChangedEventArgs@23456@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_ActiveChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Active@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Active(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PartitionIds@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@6@@Z
    virtual long get_PartitionIds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Active@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Active(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActiveChanged@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActiveChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStorePartitionSet();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePartitionSet@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@AEAAAEAUPartitionSet@2Platform@Data@6@PEAUSystemPartitionIndex@2896@@Z
    ::Windows::Data::Platform::Partitioning::PartitionSet & EnsurePartitionSet(::Windows::Data::Platform::Partitioning::SystemPartitionIndex *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSku@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@CA_NXZ
    static bool IsDesktopSku();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivePartitionChanged@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void OnActivePartitionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemPartitionIndexChanged@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void OnSystemPartitionIndexChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivePartitionId@CloudStorePartitionSet@Partitioning@Cloud@Storage@Internal@Windows@@AEAAXPEBG@Z
    void SetActivePartitionId(unsigned short const *);
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
