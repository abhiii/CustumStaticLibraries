//
//  AppDelegate.h
//  StaticLibInclide
//
//  Created by Hadi Hatunoglu on 10/06/13.
//  Copyright (c) 2013 Hadi Hatunoglu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ViewController;
#import "MyStatic.h"
#import "sampleLibrary.h"
#import "yoyo.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
