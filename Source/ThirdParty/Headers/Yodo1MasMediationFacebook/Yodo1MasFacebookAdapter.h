//
//  Yodo1MasFacebookAdapter.h
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

@interface Yodo1MasFacebookAdapter : Yodo1MasAdapterBase

+ (void)setFacebookPrivacy;

@end

NS_ASSUME_NONNULL_END