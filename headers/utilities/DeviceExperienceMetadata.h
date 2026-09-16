#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 24 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class DeviceExperienceMetadata {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FormFactor@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4DeviceFormFactor@23456@@Z
    virtual long get_FormFactor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4PartitionKind@3456@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinimumOSVersion@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_MinimumOSVersion(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifiedTime@DeviceExperienceMetadata@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUDateTime@Foundation@6@@Z
    virtual long get_ModifiedTime(::Windows::Foundation::DateTime *);
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
