//
//  JYCaculatorMake.h
//  JYKit_Example
//
//  Created by wangjiayu on 2024/2/27.
//  Copyright © 2024 jiayuwang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JYCaculatorMake : NSObject
@property (nonatomic,assign) int result;

- (JYCaculatorMake* (^)(int a))add;

@end

NS_ASSUME_NONNULL_END
