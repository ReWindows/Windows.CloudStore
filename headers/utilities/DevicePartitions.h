#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Data::Platform::Partitioning {
class DevicePartitions {
public:
    class Schema;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicePartitions@Partitioning@Platform@Data@Windows@@QEAA@$$QEAU01234@@Z
    DevicePartitions(::Windows::Data::Platform::Partitioning::DevicePartitions &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicePartitions@Partitioning@Platform@Data@Windows@@QEAA@AEBU01234@@Z
    DevicePartitions(::Windows::Data::Platform::Partitioning::DevicePartitions const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicePartitions@Partitioning@Platform@Data@Windows@@QEAA@XZ
    ~DevicePartitions();
};
} // namespace Windows::Data::Platform::Partitioning
