//
//  AppDelegate.h
//  A
//
//  Created by 孙一越 on 2018/9/11.
//  Copyright © 2018年 孙一越. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

