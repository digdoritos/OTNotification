//
//  OTMessageNotificationView.h
//  OTNotificationWindowDemo
//
//  Created by openthread on 8/14/13.
//  Copyright (c) 2013 openthread. All rights reserved.
//  Basic notification view. Subclass this to get started.

#import <UIKit/UIKit.h>
#import "OTNotificationViewProtocol.h"

@interface OTBasicNotificationView : UIView <OTNotificationViewProtocol>

//touch block
@property (nonatomic, copy) void (^touchBlock) (void);

//touch target and selector
@property (nonatomic, assign) id touchTarget;
@property (nonatomic, assign) SEL touchSelector;

@end