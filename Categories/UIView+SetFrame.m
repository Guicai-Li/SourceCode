//
//  UIView+SetFrame.m
//  LazyLoadingTest1
//
//  Created by LiGuicai on 15/1/15.
//  Copyright (c) 2015年 liguicai. All rights reserved.
//

#import "UIView+SetFrame.h"

@implementation UIView (SetFrame)

- (void)setWidth:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame       = frame;
}

- (void)setHeight:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame        = frame;
}

- (void)setOriginX:(CGFloat)x {
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame     = frame;
}

- (void)setOriginY:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame     = frame;
}

@end
