#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class TestHookCallbackOverCore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallbackEnabled@TestHookCallbackOverCore@Cloud@Storage@Internal@Windows@@UEAA_NW4TestHookScenarios@Core@2345@@Z
    virtual bool IsCallbackEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequest@TestHookCallbackOverCore@Cloud@Storage@Internal@Windows@@UEAAXAEAUHttpResponseMessage@Http@Web@5winrt@@@Z
    virtual void SendRequest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestPublishCDPActivityAsync@TestHookCallbackOverCore@Cloud@Storage@Internal@Windows@@UEAAXXZ
    virtual void TestPublishCDPActivityAsync();
};
} // namespace Windows::Internal::Storage::Cloud
