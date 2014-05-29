//
//  AppDelegate.h
//  XMPP
//
//  Created by jingdongqi on 14-5-29.
//  Copyright (c) 2014年 jing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMPPFramework.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong,nonatomic,readonly)XMPPStream *xmppStream;

- (void)connent;
- (void)disconnent;

@end
