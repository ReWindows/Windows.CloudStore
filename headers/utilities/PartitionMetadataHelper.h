#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
class PartitionMetadataHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefault@PartitionMetadataHelper@@QEAA?AV?$bonded@UPartitionMetadata@Partitioning@Platform@Data@Windows@@VProtocolReader@bond@@@bond@@W4PartitionKind@Cloud@Storage@Internal@Windows@@@Z
    WindissectOpaque CreateDefault(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestMatch@PartitionMetadataHelper@@QEAA?AUBestMatchResult@@W4PartitionKind@Cloud@Storage@Internal@Windows@@AEAUPartitionSet@Partitioning@Platform@Data@7@@Z
    BestMatchResult GetBestMatch(int, ::Windows::Data::Platform::Partitioning::PartitionSet &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PartitionMetadataHelper@@QEAA@XZ
    PartitionMetadataHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartitionMetadataFactory@PartitionMetadataHelper@@AEAAAEAVPartitionMetadataFactory@@W4PartitionKind@Cloud@Storage@Internal@Windows@@@Z
    PartitionMetadataFactory & GetPartitionMetadataFactory(int);
};
