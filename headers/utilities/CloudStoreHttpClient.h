#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 16 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreHttpClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildHttpRequestMessage@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@UEAA?AUHttpRequestMessage@Http@Web@5winrt@@VCorrelationVector@Core@2345@U67859@_N@Z
    virtual WindissectOpaque BuildHttpRequestMessage(WindissectOpaque, WindissectOpaque, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@QEAA@UIUnknown@Foundation@4winrt@@@Z
    CloudStoreHttpClient(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreHttpClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAccount@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@UEAAJUWindowId@UI@5@VCorrelationVector@Core@2345@@Z
    virtual long FixAccount(::Windows::UI::WindowId, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreHttpClient();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateForHeader@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAAJAEAUhstring@winrt@@@Z
    virtual long GetDateForHeader(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeCloudAsync@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA?AU?$IAsyncOperation@UUri@Foundation@Windows@winrt@@@Foundation@5winrt@@UHttpCredentialsHeaderValue@Headers@Http@Web@58@@Z
    virtual WindissectOpaque GetHomeCloudAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenAsync@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA?AU?$IAsyncOperation@UHttpCredentialsHeaderValue@Headers@Http@Web@Windows@winrt@@@Foundation@5winrt@@UWebAccount@Credentials@Security@58@@Z
    virtual WindissectOpaque GetTokenAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActionPermitted@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA_N_N00@Z
    virtual bool IsActionPermitted(bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSyncGroupPolicyEnabled@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@AEAA_NUhstring@winrt@@@Z
    bool IsSyncGroupPolicyEnabled(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCheckConsentForScenarioName@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA_NUhstring@winrt@@@Z
    virtual bool ShouldCheckConsentForScenarioName(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCheckConsentForScenarioName@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA_NUhstring@winrt@@PEBG@Z
    virtual bool ShouldCheckConsentForScenarioName(WindissectOpaque, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExecuteAsConsentGranted@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA_NUWebAccount@Credentials@Security@5winrt@@@Z
    virtual bool ShouldExecuteAsConsentGranted(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExecuteAsConsentGranted@CloudStoreHttpClient@Cloud@Storage@Internal@Windows@@EEAA_NUWebAccount@Credentials@Security@5winrt@@Uhstring@9@1@Z
    virtual bool ShouldExecuteAsConsentGranted(WindissectOpaque, WindissectOpaque, WindissectOpaque);
};
} // namespace Windows::Internal::Storage::Cloud
