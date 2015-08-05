//
//  NSArray+Categories.h
//  BaseProject
//
//  Created by Guicai_Li on 15/8/5.
//  Copyright (c) 2015年 Guicai_Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NSComparisonResult	(^NSMutableArrayCompareBlock)( id left, id right );

@interface NSArray (Safe)

- (id)safeObjectAtIndex:(NSInteger)index;
- (NSArray *)safeSubarrayWithRange:(NSRange)range;

@end

@interface NSMutableArray (Sort)

- (void)sort;
- (void)sort:(NSMutableArrayCompareBlock)compare;

@end
