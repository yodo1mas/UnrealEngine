//
//  Yodo1MasUnityAdsAdapter.h
//  FBSDKCoreKit
//
//  Created by ZhouYuzhen on 2020/12/3.
//

#if __has_include(<Yodo1MasCore/Yodo1MasAdapterBase.h>)
#import <Yodo1MasCore/Yodo1MasAdapterBase.h>
#else
#import "Yodo1MasAdapterBase.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasUnityAdsAdapter : Yodo1MasAdapterBase

+ (void)setUnityAdsPrivacy;

@end

NS_ASSUME_NONNULL_END