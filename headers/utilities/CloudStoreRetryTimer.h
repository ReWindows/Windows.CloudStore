#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 9 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreRetryTimer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreRetryTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRetryAfterTimer@CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@UEAA_KUhstring@winrt@@_N@Z
    virtual uint64_t GetRetryAfterTimer(WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRequestThrottled@CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@UEAA_NAEBUHttpRequestMessage@Http@Web@5winrt@@_N@Z
    virtual bool IsRequestThrottled(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThrottleTimer@CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@UEAAXAEBUHttpResponseMessage@Http@Web@5winrt@@_KAEBUhstring@9@@Z
    virtual void SetThrottleTimer(WindissectOpaque const &, uint64_t, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreRetryTimer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRetryAfter@CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@AEAA_KAEBUhstring@winrt@@_N@Z
    uint64_t GetRetryAfter(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRetryAfter@CloudStoreRetryTimer@Cloud@Storage@Internal@Windows@@AEAAXAEBUhstring@winrt@@_N_K@Z
    void SetRetryAfter(WindissectOpaque const &, bool, uint64_t);
};
} // namespace Windows::Internal::Storage::Cloud
