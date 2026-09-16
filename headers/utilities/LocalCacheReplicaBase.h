#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class LocalCacheReplicaBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlobReferenceToBlob@LocalCacheReplicaBase@Core@Cloud@Storage@Internal@Windows@@QEAA?AVblob@bond@@AEBUBlobReference@LocalCache@Platform@Data@6@@Z
    WindissectOpaque BlobReferenceToBlob(::Windows::Data::Platform::LocalCache::BlobReference const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultLocalStorage@LocalCacheReplicaBase@Core@Cloud@Storage@Internal@Windows@@QEAAAEAVDefaultLocalStorage@23456@XZ
    WindissectOpaque & GetDefaultLocalStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SchematizedDataToVersionedDataReference@LocalCacheReplicaBase@Core@Cloud@Storage@Internal@Windows@@QEAA?AUVersionedBlobReference@LocalCache@Platform@Data@6@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@@Z
    ::Windows::Data::Platform::LocalCache::VersionedBlobReference SchematizedDataToVersionedDataReference(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalCacheReplicaBase@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~LocalCacheReplicaBase();
};
} // namespace Windows::Internal::Storage::Cloud::Core
