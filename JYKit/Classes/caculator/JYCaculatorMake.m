//
//  JYCaculatorMake.m
//  JYKit_Example
//
//  Created by wangjiayu on 2024/2/27.
//  Copyright © 2024 jiayuwang. All rights reserved.
//

#import "JYCaculatorMake.h"

@implementation JYCaculatorMake
- (JYCaculatorMake * _Nonnull (^)(int))add {
  return ^(int a) {
    self.result += a;
    return self;
  };
}
@end
