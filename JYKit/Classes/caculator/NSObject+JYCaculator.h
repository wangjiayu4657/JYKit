//
//  NSObject+JYCaculator.h
//  JYKit_Example
//
//  Created by wangjiayu on 2024/2/27.
//  Copyright © 2024 jiayuwang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JYCaculatorMake.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (JYCaculator)
- (int)jy_makeCaculator:(void(^)(JYCaculatorMake *make))caculator;
@end

NS_ASSUME_NONNULL_END
