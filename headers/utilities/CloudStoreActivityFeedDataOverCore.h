#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 14 member(s).
class CloudStoreActivityFeedDataOverCore {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreActivityFeedDataOverCore@@QEAA@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@@Z
    CloudStoreActivityFeedDataOverCore(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSchema@CloudStoreActivityFeedDataOverCore@@UEAA_NXZ
    virtual bool HasSchema();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unwrap@CloudStoreActivityFeedDataOverCore@@UEAAAEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@XZ
    virtual WindissectOpaque const & Unwrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTombstone@CloudStoreActivityFeedDataOverCore@@UEAAJPEAE@Z
    virtual long get_IsTombstone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Payload@CloudStoreActivityFeedDataOverCore@@UEAAJPEAPEAD@Z
    virtual long get_Payload(char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeName@CloudStoreActivityFeedDataOverCore@@UEAAJPEAPEAD@Z
    virtual long get_TypeName(char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@CloudStoreActivityFeedDataOverCore@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreActivityFeedDataOverCore@@UEAA@XZ
    virtual ~CloudStoreActivityFeedDataOverCore();
};
