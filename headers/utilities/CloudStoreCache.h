#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 17 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CloudStoreCache@Cloud@Storage@Internal@Windows@@QEAAJPEBG@Z
    long Cleanup(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSyncData@CloudStoreCache@Cloud@Storage@Internal@Windows@@QEAAJPEBGPEAVCSimpleEnumString@@@Z
    long CleanupSyncData(unsigned short const *, CSimpleEnumString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAPEAUIDataChangeWatcher@@@Z
    virtual long CreateWatcher(unsigned short const *, unsigned short const *, unsigned short const *, IDataChangeWatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enumerate@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBGPEAPEAUIEnumString@@@Z
    virtual long Enumerate(unsigned short const *, IEnumString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEA_K@Z
    virtual long GetVersion(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAPEAEPEAKPEA_K@Z
    virtual long Load(unsigned short const *, unsigned short const *, unsigned short const *, unsigned char * *, unsigned long *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudStoreCache@Cloud@Storage@Internal@Windows@@QEAAJPEBG00_NPEAVCloudStoreMetadata@2345@PEAPEAEPEAK@Z
    long Load(unsigned short const *, unsigned short const *, unsigned short const *, bool, WindissectOpaque *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDataDescriptor@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAPEAUICloudStoreDataDescriptor@2345@@Z
    virtual long LoadDataDescriptor(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStreamForDataDescriptor@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEAUICloudStoreDataDescriptor@2345@PEAPEAUIStream@@@Z
    virtual long LoadStreamForDataDescriptor(WindissectOpaque *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00@Z
    virtual long Remove(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CloudStoreCache@Cloud@Storage@Internal@Windows@@QEAAJPEAUIDefaultLocalStorage@2345@PEAUIBulkLocalStorage@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAAJPEBG00PEAEK_K@Z
    virtual long Save(unsigned short const *, unsigned short const *, unsigned short const *, unsigned char *, unsigned long, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCache@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBulkLocation@CloudStoreCache@Cloud@Storage@Internal@Windows@@AEAAJPEBG00PEAPEAG@Z
    long GetCurrentBulkLocation(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToDefaultLocalStorage@CloudStoreCache@Cloud@Storage@Internal@Windows@@AEAAJPEBG00PEAVCloudStoreMetadata@2345@PEAEK@Z
    long SaveToDefaultLocalStorage(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *, unsigned char *, unsigned long);
};
} // namespace Windows::Internal::Storage::Cloud
