//
//  NSObject+JYCaculator.m
//  JYKit_Example
//
//  Created by wangjiayu on 2024/2/27.
//  Copyright © 2024 jiayuwang. All rights reserved.
//

#import "NSObject+JYCaculator.h"

@implementation NSObject (JYCaculator)

- (int)jy_makeCaculator:(void (^)(JYCaculatorMake * _Nonnull))caculator {
  JYCaculatorMake *make = [[JYCaculatorMake alloc] init];
  caculator(make);
  return make.result;
}
@end
