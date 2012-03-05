//
//  AppDelegate.h
//  doom
//
//  Created by Xiaobin Chen on 12-3-5.
//  Copyright xb 2012年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
