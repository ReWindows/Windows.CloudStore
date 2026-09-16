#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
class DevicePartitionMetadataFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefault@DevicePartitionMetadataFactory@@UEAA?AV?$bonded@UPartitionMetadata@Partitioning@Platform@Data@Windows@@VProtocolReader@bond@@@bond@@XZ
    virtual WindissectOpaque CreateDefault();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicePartitionMetadataFactory@@UEAA@XZ
    virtual ~DevicePartitionMetadataFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCurrentDeviceExperiencePartitionMetadata@DevicePartitionMetadataFactory@@AEAAAEBUDeviceExperiencePartitionMetadata@Partitioning@Platform@Data@Windows@@XZ
    ::Windows::Data::Platform::Partitioning::DeviceExperiencePartitionMetadata const & EnsureCurrentDeviceExperiencePartitionMetadata();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDeviceFormFactor@DevicePartitionMetadataFactory@@CA?AW4FormFactor@2_bond_enumerators@Partitioning@Platform@Data@Windows@@XZ
    static int GetCurrentDeviceFormFactor();
};
