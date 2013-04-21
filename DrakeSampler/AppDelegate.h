//
//  AppDelegate.h
//  DrakeSampler
//
//  Created by Ariel Elkin on 21/04/2013.
//  Copyright (c) 2013 ariel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AEAudioController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property AEAudioController *controller;

@end
